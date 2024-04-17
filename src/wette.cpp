#include "/home/odin/Schreibtisch/poose2/include/roulette/wette.hpp"


size_t Roulette::Wette::get_betrag() const {
    return betrag;
}


void Roulette::Wette::set_betrag(size_t neuer_betrag) {
    betrag = neuer_betrag;
}


std::string Roulette::Wette::get_wetttyp() const {
    return wetttyp;
}


void Roulette::Wette::set_wetttyp(const std::string& neuer_wetttyp) {
    wetttyp = neuer_wetttyp;
}