# uvicorn roulette_server_fastapi:app --port 8000 --reload
import spieler
import wette
import spiellogik
import spiel


from spieler import Spieler
from wette import Wette
from spiellogik import RouletteSpiel
from spiel import Spiel
from auth import AuthHandler
from schemas import AuthDetails



import os
from fastapi import FastAPI
from pydantic import BaseModel
import uvicorn
from fastapi import WebSocket, Depends, HTTPException
from fastapi.responses import HTMLResponse
from fastapi.security import HTTPBearer, HTTPAuthorizationCredentials
from datetime import datetime
import jwt


class Wettanfrage(BaseModel):
    token: str
    betrag: int
    typ: str


# Erstellen der FastAPI-Instanz
app = FastAPI()


# Erstellen einer Instanz der RouletteSpiel-Klasse

roulette_spiel = Spiel()
auth_handler = AuthHandler()

lobbys = []

@app.get("/lobby")
async def lobby_erstellen():
    id = roulette_spiel.lobby_erstellen()
    return {"id": id}


existing_usernames = set() # zum speichern bereits vorhandener Benutzernamen
token_name = {} # Dict (Map in c++) speichert zu jedem Token den Name
token_id = {}



@app.post("/registrieren", status_code=201)
async def register(auth_details:AuthDetails):
    if auth_details.username in existing_usernames:
        raise HTTPException(status_code=400)
    token = auth_handler.encode_token(auth_details.username)
    existing_usernames.add(auth_details.username)
    token_name[token] = auth_details.username
    return {"token": token}


@app.get("/beitreten/{id}/{token}")
async def lobby_beitreten(id: int, token: str):
    if (roulette_spiel.existiert_lobby(id) == 0):
        raise HTTPException(status_code=400)
    name = token_name[token]
    host = roulette_spiel.lobby_beitreten(id, name)
    token_id[token] = id

    return {"id": id, "host": host}
    

@app.get("/lobbys_anzeigen")
async def lobbys_anzeigen():
    lobby = []
    lobby = roulette_spiel.lobbys_anzeigen_client()
    return {"message" : lobby}


# API-Endpunkt zum Anzeigen der Spieler
@app.get("/spielerliste/{id}")
async def spieler_anzeigen(id : int):
    array = []
    array = roulette_spiel.lobby_mitglieder(id)
    return {"message": array}


@app.get("/start/{id}")
async def spiel_starten(id : int):
    print("Spiel gestartet")
    roulette_spiel.spiel_beginnen(id)


@app.get("/warten_auf_start/{id}")
async def warte_auf_start(id : int):
    print(roulette_spiel.spiel_gestartet(id))
    gestartet = roulette_spiel.spiel_gestartet(id)
    if (gestartet == 0):
        print(gestartet)
        return {"Spiel" : gestartet}
    else:
        print(gestartet)
        return {"Spiel" : gestartet}
    

@app.post("/wette_abgeben")
async def wette_abgeben(wettanfrage: Wettanfrage):
    token = wettanfrage.token
    id = token_id[token]
    name = token_name[token]
    betrag = wettanfrage.betrag
    typ = wettanfrage.typ
    roulette_spiel.wetten_pl(id, name, betrag, typ)
    erstellt : bool = 1
    return {"Wette": erstellt}


@app.get("/wetten_anzeigen/{id}")
async def wetten_anzeigen(id: int):
    starten: bool = 0
    wetten = []
    wetten = roulette_spiel.wetten_im_client_anzeigen(id)
    if (roulette_spiel.mitspieler_anz(id) == len(wetten)):
        starten = 1
        return {"Wetten": wetten, "Starten": starten}
    return {"Wetten": wetten, "Starten": starten}


@app.get("/spielen/{id}")
async def spielen(id: int):
    zahl = roulette_spiel.spielen(id)
    farbe = roulette_spiel.farbe_zu_zahl(zahl, id)
    return {"Zahl": zahl, "Farbe": farbe}


@app.get("/zahl/{id}")
async def zahl(id: int):
    zahl = roulette_spiel.zahl_der_lobby(id)
    farbe = roulette_spiel.farbe_zu_zahl(zahl, id)
    return {"Zahl": zahl, "Farbe": farbe}


@app.get("/guthaben/{token}")
async def guthaben(token: str):
    name = token_name[token]
    id = token_id[token]
    geld = roulette_spiel.guthaben(id, name)
    return {"Geld": geld}


@app.get("/ende/{id}")
async def ende(id: int):
    ende: bool = 0
    if (roulette_spiel.runde_einer_lobby(id) > 3):
        ende = 1
        array = []
        array = roulette_spiel.bestenliste_return(id)
        print(array)
        return {"Ende": ende, "Array": array}
    return {"Ende": ende}
    
    

# Beispiel-Endpunkt zum Testen der API
@app.get("/")
async def read_root():
    return {"message": "Hello World"}


# Starten der FastAPI-Anwendung
if __name__ == '__main__':
  this_python_file = os.path.basename(__file__)[:-3]
  instance = uvicorn.run(f"{this_python_file}:app", host="127.0.0.1", port=8000, log_level="info", reload=True)