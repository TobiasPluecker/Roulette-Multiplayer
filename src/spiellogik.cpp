#include "/home/odin/Schreibtisch/poose2/include/roulette/spiellogik.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"



Roulette::RouletteSpiel::RouletteSpiel(int nummer) : id(nummer) {}

int Roulette::RouletteSpiel::drehen() {
    static bool temp = false;
    if (!temp) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        temp = true;
    }

    int zahl = std::rand() % 37;
    mom_zahl = zahl;
    runde++;
    return zahl;
}


void Roulette::RouletteSpiel::spieler_hinzufuegen(Spieler neuer_spieler) {
    spielerliste.push_back(neuer_spieler);
}


void Roulette::RouletteSpiel::spieler_anzeigen() {
    for (const auto& spieler : spielerliste) {
            std::cout << "Spieler: " << spieler.get_name() << std::endl;
        }
}


int Roulette::RouletteSpiel::spielen() {
    int zahl = drehen();
    std::string farbe = rad[zahl];
    std::cout << "Die Zahl diese Runde ist: " << zahl << ", " << farbe << std::endl;
    return zahl;
}


std::string Roulette::RouletteSpiel::get_farbe(int zahl) {
    std::string farbe = rad[zahl];
    return farbe;
}

void Roulette::RouletteSpiel::spieler_erstellen(std::string a) {
    Roulette::Spieler spieler(a);
    spieler_hinzufuegen(spieler);
}

Roulette::Spieler Roulette::RouletteSpiel::get_spieler(int indx) {
    return spielerliste[indx];
}

void Roulette::RouletteSpiel::wette_platzieren(std::string spielername, size_t hoehe, std::string typ) {
    Roulette::Wette wette(hoehe, typ);

    if (hoehe >= 0) {
        for (int i = 0; i < spielerliste.size(); i++) {

            if (spielerliste[i].get_name() == spielername) {
                spielerliste[i].einsaetze_platzieren(wette);
                return;
            }

        }
    } else {
        std::cout << "Keine gültige Eingabe!" << std::endl;
    }
}

void Roulette::RouletteSpiel::gewinne_berechen(int zahl) {
    std::string temp = get_farbe(zahl);

    for (int i = 0; i < spielerliste.size(); i++) {
        spielerliste[i].get_wette();
        spielerliste[i].gewinn_berechnen(zahl, temp);
    }
}

void Roulette::RouletteSpiel::starte_spiel(int runden) {
    int i = 0;
    while(i != runden) {
        std::cout << "Runde " << i << std::endl;

        // EInsätze platzieren
        for (auto& s : spielerliste) {
            size_t einsatz;
            std::string typ;
            std::cout << "Spieler " << s.get_name() << ", gib den Einsatz für den Spieler ein:" << std::endl;
            std::cin >> einsatz;
            std::cout << "Wetttyp: " << std::endl;
            std::cin >> typ;
            wette_platzieren(s.get_name(), einsatz, typ);
        }
        int zahl_der_runde = spielen();

        gewinne_berechen(zahl_der_runde);

        std::cout << "Nach dem verrechnen: " << std::endl;
        for (int j = 0; j < spielerliste.size(); j++) {
            Spieler spieler_var = spielerliste[j];
            std::cout << "Guthaben von " << spieler_var.get_name() <<  ": " << spieler_var.get_guthaben() << std::endl;
        }

        i++;
    }
}


size_t Roulette::RouletteSpiel::guthaben(std::string spieler) {
    for (int i = 0; i < spielerliste.size(); i++) {
        std::string name = spielerliste[i].get_name();
        if (name == spieler) {
            return spielerliste[i].get_guthaben();
        }
    }
    std::cout << "Spieler nicht gefundnen" << std::endl;
    return 0;
}


std::vector<std::string> Roulette::RouletteSpiel::get_spieler_namen() {
    std::vector<std::string> namen;
    for (int i = 0; i < spielerliste.size(); i++) {
        namen.push_back(spielerliste[i].get_name());
    }
    return namen;
}


void Roulette::RouletteSpiel::set_host() {
    host = spielerliste[0].get_name();
}


bool Roulette::RouletteSpiel::get_pause() {
    return pause;
}

int Roulette::RouletteSpiel::get_spieler_anz() {
    return spielerliste.size();
}

bool Roulette::RouletteSpiel::get_gestartet() {
    return gestartet;
}

void Roulette::RouletteSpiel::set_gestartet() {
    gestartet = true;
}

std::vector<std::string> Roulette::RouletteSpiel::alle_wetten_in_einer_lobby() {
    std::vector<std::string> wetten_rueckgabe;
    for (int i = 0; i < spielerliste.size(); i++) {
        if (spielerliste[i].get_wettarray_size() == runde) {
            Wette w = spielerliste[i].get_wette();
            std::string temp = "Spieler: " + spielerliste[i].get_name() + " hat " + std::to_string(w.get_betrag()) + " auf " + w.get_wetttyp() + " gesetzt.";
            wetten_rueckgabe.push_back(temp);
        }   
    }
    return wetten_rueckgabe;
}


int Roulette::RouletteSpiel::get_mom_zahl() {
    return mom_zahl;
}

int Roulette::RouletteSpiel::get_runde() {
    return runde;
}

std::vector<std::string> Roulette::RouletteSpiel::bestenliste() {
    std::vector<std::string> leaderboard;
    if (spielerliste.size() == 1) {
        std::string temp_ = spielerliste[0].get_name() + " hat " + std::to_string(spielerliste[0].get_guthaben());
        leaderboard.push_back(temp_);
        return leaderboard;
    }

    if (spielerliste.size() == 2) {
        if (spielerliste[0].get_guthaben() > spielerliste[1].get_guthaben()) {
            std::string temp1 = spielerliste[0].get_name() + " hat " + std::to_string(spielerliste[0].get_guthaben());
            leaderboard.push_back(temp1);
            std::string temp2 = spielerliste[1].get_name() + " hat " + std::to_string(spielerliste[1].get_guthaben());
            leaderboard.push_back(temp2);
            return leaderboard;
        } else {
            std::string temp2 = spielerliste[1].get_name() + " hat " + std::to_string(spielerliste[1].get_guthaben());
            leaderboard.push_back(temp2);
            std::string temp1 = spielerliste[0].get_name() + " hat " + std::to_string(spielerliste[0].get_guthaben());
            leaderboard.push_back(temp1);
            return leaderboard;
        }
    }


    for (int i = 0; i < spielerliste.size(); i++) {
        int max = i;
        for (int j = i+1; j < spielerliste.size(); j++) {
            if (spielerliste[max].get_guthaben() > spielerliste[j].get_guthaben()) {
                max = j;
            }
        }
        Spieler temp = spielerliste[i];
        spielerliste[i] = spielerliste[max];
        spielerliste[max] = temp;

    }

    for (int a = spielerliste.size()-1; a >= 0; a--) {
        std::string temp = spielerliste[a].get_name() + " hat " + std::to_string(spielerliste[a].get_guthaben());
        leaderboard.push_back(temp);
    }

    return leaderboard;

}