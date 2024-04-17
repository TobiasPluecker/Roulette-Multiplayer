# Projekt Beta

## Projekt bauen
Um das Projekt zu bauen, soll einer der folgenden Befehlsketten im Projektverzeichnis ausgeführt werden.
In Linux Mint verwendet man
```
cmake -S . -B build && cmake --build build && cmake --install build
```
Auf den Rechnern der CIP Pools ist der Aufruf leider ein wenig länger
```
export PROJ_PATH=`pwd` && cmake -S $PROJ_PATH -B $PROJ_PATH/build && cmake --build $PROJ_PATH/build && cmake --install $PROJ_PATH/build
```
Falls das Projekt so nicht baut, liegen entweder Implementierungsfehler vor oder es fehlen externe Softwarepakete.


## Arbeitsteilung
Für dieses Projekt haben wir uns folgende Aufteilung überlegt.

Tobias kümmert sich um die Implementierung der Spiellogik in C++. 
    - Definition der Spielregeln
    - Aufbau der Spieloberfläche
    - Verwaltung der Spieler/Einsätze
    - Durchführung der Spielrunden


Sardar wird den REST-Server mit pybind11 entwickeln
    - Erstellung von API-Endpunkten für die Spielinteraktion
    - Verbinden der C++-Spiellogik mit dem REST-Server
    - gewährleistet Kommunikation zwischen Server und Client


    Schritte:
    1. funktionale Schnittstelle definieren

    2. funktionale Schnittstellle implementieren

    3. funktionale Schnittstelle testen


Jawad befasst sich mit der Client-Entwicklung

    - Benutzerfläche für die Spieler

    - Live-Updates (Polling)

    - Interaktion mit dem REST-Server

    - Anezige der Spielinformationen

Um unser Projekt zu nutzen sind folgende Beflehle notwendig:

Um den Server zu starten führe uvicorn "uvicorn roulette_server_fastapi:app --port 8000 --reload" im Verzeichnis extra aus.

Um einen Client aufzurufen verwende ebenfalls im Verzeichnis extra "python3 roulette_requests.py" aus.

Unsere Anforderungen an unser Projekt:
- faires Roulette
- mehrere Spielinstanzen
- Mehrspieler
- Lobby


![Spiellogik](/bilder/spiellogik.png)
![Spiel](/bilder/Spiel.png)
![ClientServer](/bilder/Server_Client_neu.png)
![SkizzeClient](/bilder/Clientfunktionsweise.png)
![Uebersicht](/bilder/Uebersicht.png)
![Gant](/bilder/gant.png)
![Spielablauf](/bilder/spielablauf.png)

 
