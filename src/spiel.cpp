#include "/home/odin/Schreibtisch/poose2/include/roulette/spiel.hpp"
/**
 * @file spiel.cpp
 * @brief Hier findet die komplette Lobby verwaltung statt.
 * 
 * Grundsätzlich werden neue Lobbys im Array lobbys gespeichert.
 * Dadurch wird ermöglicht, dass jedes Spiel in einer Lobby unabhänig von den Anderen ist.
 * Jede Aktion wird dann auf der jeweiligen Lobby aufgerufen.
*/

/**
 * @brief Startet das Spiel in einer bestimmten Lobby.
 * @param lobby Die Lobby, in welcher das Spiel gestartet werden soll .
*/
void Roulette::Spiel::spiel_beginnen(int lobby) {
    lobbys[lobby-1].set_gestartet();
}


int Roulette::Spiel::get_spiel_nr() {
    return spiel_nr;
}

/**
 * @brief Erstellt eine neue Lobby.
 * @return Gibt die Lobby ID zurück.
*/
int Roulette::Spiel::lobby_erstellen() {
    int temp = spiel_nr;
    int i = 0;
    for (int i = 0; i < lobbys.size(); i++) {
        ///< Lobby finden welche noch existiert, aber in welcher nicht gespielt wird
        if (lobbys[i].get_pause() == 1) {
            int temp = i;
            Roulette::RouletteSpiel rs(i); ///< Objekt in der Spiellogik erzeugen
            lobbys[i] = rs; ///< Lobby hinzufügen
            std::cout << "Lobby " << i << " erstellt" << std::endl;
            return i;
        }
    }
    ///< Wenn in allen vorhandenen Lobbys gespielt wird, wird eine neue erzeugt
    Roulette::RouletteSpiel rs(spiel_nr); 
    lobbys.push_back(rs); ///< Neue Lobby ins lobby Array
    std::cout << "Lobby " << spiel_nr << " erstellt" << std::endl;
    spiel_nr += 1;
    return temp;
}

/**
 * @brief Einer Lobby als Spieler beitreten.
 * @param lobby Die Lobby, welcher beigetreten werden soll.
 * @param name Der Name des Spielers, welcher beitritt.
 * @return Ob der Spieler dier Host ist oder nicht.
*/
bool Roulette::Spiel::lobby_beitreten(int lobby, std::string name) {
    lobbys[lobby -1].spieler_erstellen(name);
    std::cout << "Spieler " << name << " in lobby" << lobby << std::endl;
    if (lobbys[lobby -1].get_spieler_anz() == 1) {
        return 1;
    } else {
        return 0;
    }
}
/**
 * @brief Zeigt die Lobbys auf dem Server an (nicht im Client).
*/
void Roulette::Spiel::lobbys_anzeigen() {
    for (int i = 0; i < lobbys.size(); i++) {
        std::cout << "In Lobby " << i+1 << " spielen: " << std::endl;
        lobbys[i].spieler_anzeigen();
    }
}

/**
 * @brief Ermöglicht das Abgeben von Wetten.
 * @param lobby Übergibt, in welcher Lobby die Wette Abgegeben werden soll.
 * @param name Übergibt, welcher Spieler die Wette abgegeben hat.
 * @param betrag Übergibt den Betrag der Wette.
 * @param typ Übergibt den Wetttyp (z.B "rot", "gerade", "5", "1:12")
*/
void Roulette::Spiel::wetten(int lobby, std::string name, size_t betrag, std::string typ) {
    lobbys[lobby-1].wette_platzieren(name, betrag, typ);
    std::cout << "In Lobby " << lobby << " hat " << name << " " << betrag << " auf " << typ << " gesetzt." << std::endl;
}


Roulette::RouletteSpiel Roulette::Spiel::get_lobby(int idx) {
    return lobbys[idx-1];
}

/**
 * @brief Führt das Spielen durch (Rad drehen usw.).
 * @param lobby Übergibt, in welcher Lobby gespielt werden soll.
 * @return Gibt die Zahl zurück, welche beim Spielen ermittelt wurde.
*/
int Roulette::Spiel::spielen(int lobby) {
    ///< Die Funktion spielen der Spiellogik wird aufgerufen.
    int zahl = lobbys[lobby-1].spielen();
    ///< Für alle Spieler in der Lobby wird der Gewinn berechnet.
    lobbys[lobby-1].gewinne_berechen(zahl);
    return zahl;
}

/**
 * @brief Gibt uns das Guthaben einer Person in einer Lobby zurück.
 * @param lobby Übergibt, in welcher Lobby sich der Spieler befindet.
 * @param name Übergibt den Namen, der Person, von der das Guthaben abgefragt wird.
 * @return Gibt uns das Guthaben der Person zurück
*/
size_t Roulette::Spiel::guthaben(int lobby, std::string name) {
    int geld = lobbys[lobby-1].guthaben(name);
    return geld;
}

/**
 * @brief Gibt uns Auskunft, ob eine bestimmte Lobby existiert.
 * @param lobby Für welche Lobby soll abgefragt werden, ob sie existiert.
 * @return Gibt einen Boolean entsprechend der if Abfrage zurück.
*/
bool Roulette::Spiel::existiert_lobby(int lobby) {
    if (lobby <= lobbys.size()) {
        return true;
    } else {
        return false;
    }
}

/**
 * @brief Ermöglicht das Anzeigen der Lobbys im Client.
 * @return Gibt uns ein String Array zurück, welches alle Lobbys beinhaltet, die existieren und denen man beitregen kann.
*/
std::vector<std::string> Roulette::Spiel::lobbys_anzeigen_client() {
    std::vector<std::string> lobbys_namen;
    int i = 0;
    while (i < lobbys.size()) {
        ///< Lobbys welche auf "Pasue" gestellt sind, kann man nicht beitreten.
        if (lobbys[i].get_pause() == 1) {
            i++;
        } else {
            std::string temp = "Lobby ";
            ///< Baut den String welcher im Array gespeichert werden soll
            temp = temp + std::to_string(i+1);
            i++;
            lobbys_namen.push_back(temp);
        }
    }
    return lobbys_namen;
}

/**
 * @brief Löscht die Letzte Lobby. Diese Funktion wird nur aufgerufen, wenn das Spiel in der Lobby zu Ende ist.
*/
void Roulette::Spiel::lobby_loeschen() {
    lobbys.pop_back();
}
/**
 * @brief Füllt ein String Array mit allen Spielernamen, welche sich in der Lobby befinden.
 * @param lobby Die Lobby von welcher die Spieler angezeigt werden sollen.
*/
std::vector<std::string> Roulette::Spiel::lobby_mitglieder(int lobby) {
        return lobbys[lobby-1].get_spieler_namen();
}

/**
 * @brief Gibt zurück, ob eine bestimmte Lobby gestartet wurde
 * @param lobby Welche Lobby?
*/
bool Roulette::Spiel::spiel_gestartet(int lobby) {
    return lobbys[lobby-1].get_gestartet();
}

/**
 * @brief Ermöglicht das Abgeben von Wetten.
 * @param lobby Übergibt, in welcher Lobby die Wette Abgegeben werden soll.
 * @param name Übergibt, welcher Spieler die Wette abgegeben hat.
 * @param betrag Übergibt den Betrag der Wette.
 * @param typ Übergibt den Wetttyp (z.B "rot", "gerade", "5", "1:12")
*/
void Roulette::Spiel::wetten_pl(int lobby, std::string name, size_t betrag, std::string typ) {
    ///< Aufruf der Funktion aus der Spiellogik, welche das wetten platzieren ermöglicht
    lobbys[lobby-1].wette_platzieren(name, betrag, typ);
}

/**
 * @brief Gibt alle Wetten, welche von Leuten Platziert werden als String Array zurück
 * @param lobby Von welcher Lobby?
*/
std::vector<std::string> Roulette::Spiel::wetten_im_client_anzeigen(int lobby) {
    ///< Aufruf der Funktion in der Spiellogik, welche das Array zusammenstellt
    return lobbys[lobby-1].alle_wetten_in_einer_lobby();
}

/**
 * @brief Gibt alle Spieler in einer bestimmten Lobby zurück.
 * @param lobby Von welcher Lobby?
 * @return ID
*/
int Roulette::Spiel::mitspieler_anz(int lobby) {
    ///< Aufruf der Funktion in der Spiellogik, welche das Array zusammenstellt
    return lobbys[lobby-1].get_spieler_anz();
}

/**
 * @brief Funktion um die Farbe von einer Zahl zu erhalten.
 * @param lobby Theoretisch nicht wichtig, nur da um ein Objekt zu haben, auf dem man die Funktion aufrufen kann.
 * @param zahl Die Zahl, von welcher die Farbe ermmitelt wird.
 * @return Die Farbe zu der Zahl.
*/
std::string Roulette::Spiel::farbe_zu_zahl(int zahl, int lobby) {
    std::string farbe = lobbys[lobby-1].get_farbe(zahl);
    return farbe;
}
/**
 * @brief Zahl, welche durchs Spielen erzeugt wurde zurückgeben.
 * @param lobby In welcher Lobby?
 * @return Die Zahl welche beim Spielen in der Lobby aufgetreten ist.
*/
int Roulette::Spiel::zahl_der_lobby(int lobby) {
    return lobbys[lobby-1].get_mom_zahl();
}


/**
 * @brief In welcher Runde befindet sich eine Lobby?
 * @param lobby In welcher Lobby?
 * @return Die Zahl.
*/
int Roulette::Spiel::runde_einer_lobby(int lobby) {
    return lobbys[lobby-1].get_runde();
}

/**
 * @brief Bestenliste zurückgeben.
 * @param lobby In welcher Lobby?
 * @return Array, welches die Bestenliste enthält
*/
std::vector<std::string> Roulette::Spiel::bestenliste_return(int lobby) {
    ///< Aufruf der Funktion in der Spiellogik, welche das Array zusammenstellt.
    return lobbys[lobby-1].bestenliste();
}

