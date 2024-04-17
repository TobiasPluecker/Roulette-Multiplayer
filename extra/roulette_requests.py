import requests
import time

token = ""
player_name = ""
is_host = False
lobby_id2 = 0
beigetreten = False
guthaben = 0
guthaben_nach = 0
geld = 0
ende2 = 0
starten = 0


def main():
    base_url = "http://127.0.0.1:8000"


    # Mit der Funktion registriert man sich beim Server und bekommt sein Token zur verifikation
    def register(username):
        global token, player_name
        while True:
            response = requests.post(f"{base_url}/registrieren", json={"username": username})
            if response.status_code == 201:
                data = response.json()
                token = data["token"]
                player_name = username
                print("Registrierung erfolgreich.")
                break
            else:
                print("Username existiert bereits.")
                username = input("Einen anderen Usernamen eingeben: ")


    # Damit stellt man dem Server eine Anfrage eine Lobby zu erstellen
    def create_lobby():
        global is_host
        response = requests.get(f"{base_url}/lobby")
        if response.status_code == 200:
            data = response.json()
            lobby_id = data["id"]
            is_host = True
            print(f"Lobby created. ID: {lobby_id}")
        else:
            print("Failed to create a lobby.")


    # Damit Joint man einer Lobby seiner Wahl indem man die Lobby ID und seinen Verifikationstoken an den Server gibt
    def join_lobby(lobby_id):
        global is_host
        global lobby_id2
        response = requests.get(f"{base_url}/beitreten/{lobby_id}/{token}")
        if response.status_code == 200:
            data = response.json()
            is_host = data["host"]
            
            lobby_id2 = data["id"]
            print(f"Lobby {lobby_id2} beigetrete")
        else:
            print("Beitritt in die Lobby Fehlgeschlagen.")
    

    #wurde durch poll_lobbys ersetzt
    def lobbys_anzeigen():
        url = f"{base_url}/lobbys_anzeigen"
        response = requests.get(url)
        if response.status_code == 200:
            lobbys = response.json()["message"]
            print("Lobbys:")
            for l in lobbys:
                print(l)

    #Zeigt die Lobby Liste an mit Polling in 5 Sekunden Intervallen
    def poll_lobbys():
        global lobby_id2
        while True:
            response = requests.get(f"{base_url}/lobbys_anzeigen")
            if response.status_code == 200:
                lobbys = response.json()["message"]
                print("Lobbys:")
                for l in lobbys:
                    print(l)
                 #test   
                print("1. Lobby erstellen")
                print("2. Lobby joinen")
                choice = input("Geben Sie Ihre Wahl ein: ")

        
                if choice == "1":
                    if token and player_name:
                        create_lobby()
            
                elif choice == "2":
                    if token and player_name:
                        lobby_id = input("Geben Sie eine Lobby ID an: ")
                        join_lobby(lobby_id)
                #test
                if lobby_id2 > 0:  # Überprüfen, ob bereits einer Lobby beigetreten wurde
                    break
            else:
                print("Fehler beim Abrufen der Lobbys.")
        
            time.sleep(5)  # Verzögerung von 5 Sekunden vor dem nächsten Polling

    #gibt die Spielerliste aus von der Lobby in der man sich gerade befindet
    def get_spielerliste():
        response = requests.get(f"{base_url}/spielerliste/{lobby_id2}")
        if response.status_code == 200:
            data = response.json()
            spieler_liste = data["message"]
            print("Spielerliste:")
            for spieler in spieler_liste:
                print(f"- {spieler}")
        else:
            print("Fehler beim Abrufen der Spielerliste.")
        
    
    # Funktion zum Starten des Spiels
    def start_spiel():
        global lobby_id2
        response = requests.get(f"{base_url}/start/{lobby_id2}")
        if response.status_code == 200:
            print("Spiel gestartet")
        else:
            print("Fehler beim Starten des Spiels.")


    # Funktion zum Warten auf den Spielstart
    def warte_auf_start():
        global lobby_id2
        while True:
            response = requests.get(f"{base_url}/warten_auf_start/{lobby_id2}")
            if response.status_code == 200:
                data = response.json()
                spiel_gestartet = data["Spiel"]
                if spiel_gestartet == 0:
                    print("Warten auf Spielstart...")
                    get_spielerliste()
                else:
                    print("Spiel gestartet.")
                    break
            else:
                print("Fehler beim Warten auf den Spielstart.")
            time.sleep(5)


    def wette_abgeben(betrag, typ):
        global token
    
        wettanfrage = {
            "token": token,
            "betrag": betrag,
            "typ": typ
        }

        response = requests.post(f"{base_url}/wette_abgeben", json=wettanfrage)
        if response.status_code == 200:
            print("Wette erfolgreich abgegeben.")
        else:
            print("Fehler beim Abgeben der Wette.")


    #Mit Polling wird abgefragt ob das alle Spieler ihre Wette abgegeben haben wenn nein werden immer alle bereits
    #abgegebenen Wetten angezeigt bei allen die schon gewettet haben und wenn alle gewettet haben wird automatisch gespielt
    #und es wird geschaut ob man gewonnen oder verloren hat und es wird das neue Guthaben ausgegeben
    def get_wetten():
        global lobby_id2
        global guthaben
        global geld
        global guthaben_nach
        global starten
        while True:
            response = requests.get(f"{base_url}/wetten_anzeigen/{lobby_id2}")
            if response.status_code == 200:
                data = response.json()
                starten = data["Starten"]
                if starten == 0:
                    wetten = data["Wetten"]
                    print("Platzierte Wetten:")
                    for wette in wetten:
                        print(f"- {wette}")
                else:
                    if is_host == True:
                        #time.sleep(6)
                        get_guthaben()
                        guthaben = geld
                        spielen()
                        get_guthaben()
                        guthaben_nach = geld
                        if guthaben < guthaben_nach:
                            print(f"Gewonnen! Neues Guthaben beträgt: {geld}")
                            break
                        else:
                            print(f"Verloren! Neues Guthaben beträgt: {geld}")
                            break
                    else:
                        get_guthaben()
                        guthaben = geld
                        time.sleep(6)
                        get_zahl()
                        get_guthaben()
                        guthaben_nach = geld
                        if guthaben < guthaben_nach:
                            print(f"Gewonnen! Neues Guthaben beträgt: {geld}")
                            break
                        else:
                            print(f"Verloren! Neues Guthaben beträgt: {geld}")
                            break    
            else:
                print("Fehler beim Abrufen der Wetten.")

            time.sleep(5)

    #damit signalisiert der Host Client automatisch nachdem alle Wetten abgeben worden sind das man ein Spielergebnis haben will
    def spielen():
        global lobby_id2
        response = requests.get(f"{base_url}/spielen/{lobby_id2}")
        if response.status_code == 200:
            data = response.json()
            zahl = data["Zahl"]
            farbe = data["Farbe"]
            print("Gewinnzahl: ", zahl, "Farbe: ",farbe)
        else:
            print("Fehler beim Spielen.")

    #Diese Funktion ist dafür da dass alle anderen Clients das gleiche Spielergebnis wie der Host bekommen
    def get_zahl():
        global lobby_id2
        response = requests.get(f"{base_url}/zahl/{lobby_id2}")
        if response.status_code == 200:
            data = response.json()
            zahl = data["Zahl"]
            farbe = data["Farbe"]
            print("Gewinnzahl:", zahl, "Farbe: ",farbe)
        else:
            print("Fehler beim Abrufen der Gewinnzahl.")
            
    #Abfrage nach dem Guthabenstand von sich selber mithilfe des Tokens
    def get_guthaben():
        global token
        global geld
        response = requests.get(f"{base_url}/guthaben/{token}")
        if response.status_code == 200:
            data = response.json()
            geld = data["Geld"]
            #print("Aktuelles Guthaben:", geld)
        else:
            print("Fehler beim Abrufen des Guthabens.")

    #Abfrage ob die Maximale Anzahl der Runden gespielt wurde, wenn ja gibt Leaderboard an und beendet Spiel
    def ende():
        global lobby_id2
        global ende2
        response = requests.get(f"{base_url}/ende/{lobby_id2}")
        if response.status_code == 200:
            data = response.json()
            ende2 = data["Ende"]
            if ende2 == 1:
                array = data["Array"]
                print("Spiel beendet.")
                print("Bestenliste:")
                for element in array:
                    print(f"- {element}")
            #else:
                #print("Spiel läuft noch.")
        else:
            print("Fehler beim Abrufen des Endepunkts.")


    # Main menu loop
    print("\n-- Roulette Game --")
    username = input("Username eingeben: ")
    register(username)
    poll_lobbys()

    if is_host == False:
        warte_auf_start()
    else:
        print("1. Spiel starten")
        choice = input("Geben Sie Ihre Wahl ein: ")
        if choice == "1":
            if token and player_name:
                start_spiel()
    while True:
        ende()
        if ende2 == 1:
            time.sleep(7)
            break
        else:
            while True:
                typ = input("Wetttyp rot, schwarz, gerade, ungerade, 1:12, 13:24, 25:36 oder eine Zahl von 1 bis 36: ")

                if typ in ["rot", "schwarz", "gerade", "ungerade", "1:12", "13:24", "25:36"] or (typ.isdigit() and 1 <= int(typ) <= 36):
                    break
                else:
                    print("Ungültiger Wetttyp. Bitte geben Sie einen gültigen Wetttyp ein.")

            while True:
                betrag = input("Geben Sie den Wetteinsatz ein: ")

                if betrag.isdigit() and float(betrag) > 0:
                    betrag = float(betrag)
                    break
                else:
                    print("Ungültiger Wetteinsatz. Bitte geben Sie eine positive Zahl ein.")
            wette_abgeben(betrag, typ)
            get_wetten()
            time.sleep(2)

if __name__ == "__main__":
    main()
