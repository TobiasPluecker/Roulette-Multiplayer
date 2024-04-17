#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/wette.hpp"


void Roulette::Spieler::set_name(std::string neuer_name) {
    name = neuer_name;
}


std::string Roulette::Spieler::get_name() const {
    return name;
}


void Roulette::Spieler::einsaetze_platzieren(const Wette& wette) {
    wetten.push_back(wette);
    size_t einsatz = wette.get_betrag();
    guthaben = guthaben - einsatz;
}


void Roulette::Spieler::wette_anzeigen() const {
    std::cout << "Spieler: " << name << std::endl;
    for (const auto& wette : wetten) {
        std::cout << "Wette: Betrag = " << wette.get_betrag() << ", Typ = " << wette.get_wetttyp() << std::endl;
    }
}

void Roulette::Spieler::guthaben_festlegen(size_t geld) {
    guthaben = geld;
}

size_t Roulette::Spieler::get_guthaben() const {
    return guthaben;
}

void Roulette::Spieler::gewinn_berechnen(int zahl, std::string farbe) {
    //std::cout << "ZAHL: " << zahl << std::endl;
    size_t temp_guthaben = guthaben;
    Wette spieler_wette = wetten[wetten.size()-1];
    size_t betrag = spieler_wette.get_betrag();
    //std::cout << "gesetzter Betrag vom Spieler: " << betrag << std::endl;
    std::string typ = spieler_wette.get_wetttyp();
    //std::cout << "TYP: " << typ << std::endl;

    if (farbe == "rot" && typ == "rot") {
        temp_guthaben = temp_guthaben + betrag + betrag;
    } else if (farbe == "schwarz" && typ == "schwarz") {
        temp_guthaben = temp_guthaben + betrag + betrag;
    } else if (std::to_string(zahl) == typ) {
        temp_guthaben = (betrag * 36) + betrag + temp_guthaben;
    } else if (typ == "1:12" && 0 < zahl && zahl < 13) {
        temp_guthaben = (betrag * 3) + temp_guthaben;
    } else if (typ == "13:24" && 12 < zahl && zahl < 25) {
        temp_guthaben = (betrag * 3) + temp_guthaben;
    } else if (typ == "25:36" && 24 < zahl && zahl < 37) {
        temp_guthaben = (betrag * 3) + temp_guthaben;
    } else if (typ == "gerade" && zahl != 0 && zahl % 2 == 0) {
        temp_guthaben = temp_guthaben + betrag + betrag;
    } else if (typ == "ungerade" && zahl != 0 && zahl % 2 == 1) {
        temp_guthaben = temp_guthaben + betrag + betrag;
    }



    //std::cout << "TEMP_GUTHABEN: " << temp_guthaben << std::endl; 
    size_t total = temp_guthaben;
    guthaben_aktuallisieren(total);
    //std::cout << "TOTAL: " << total << std::endl;

}

void Roulette::Spieler::guthaben_aktuallisieren(size_t betrag_) {
    guthaben = betrag_;
}

Roulette::Wette Roulette::Spieler::get_wette() const {
    return wetten[wetten.size()-1];
}

int Roulette::Spieler::get_wettarray_size() {
    return wetten.size();
}


