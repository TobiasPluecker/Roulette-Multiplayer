#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/spiellogik.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/wette.hpp"


#include <pybind11/pybind11.h>



namespace py = pybind11;
using namespace Roulette;

PYBIND11_MODULE(spieler,m){
 m.doc() =  "Spieler";
   py::class_<Roulette::Spieler>(m, "Spieler")
        .def(py::init<const std::string&>())
        .def("einsaetze_platzieren", &Roulette::Spieler::einsaetze_platzieren)
        // .def("gewinn_verrechnen", &Roulette::Spieler::gewinn_verrechnen)
        .def("set_name", &Roulette::Spieler::set_name)
        .def("get_name", &Roulette::Spieler::get_name)
        .def("wette_anzeigen", &Roulette::Spieler::wette_anzeigen)
        .def("guthaben_festlegen", &Roulette::Spieler::guthaben_festlegen)
        .def("get_guthaben", &Roulette::Spieler::get_guthaben)
        .def("gewinn_berechnen", &Roulette::Spieler::gewinn_berechnen)
        .def("guthaben_aktuallisieren", &Roulette::Spieler::guthaben_aktuallisieren);
}


PYBIND11_MODULE(spiellogik,m){
    m.doc() = "Spielogik";
   py::class_<Roulette::RouletteSpiel>(m, "RouletteSpiel")
        .def(py::init())
        .def("drehen", &Roulette::RouletteSpiel::drehen)
        // .def("gewinn_ermitteln", &Roulette::RouletteSpiel::gewinn_ermitteln)
        // .def("spieler_hinzufuegen", &Roulette::RouletteSpiel::spieler_hinzufuegen)
        // .def("hinzufuegen_wette", &Roulette::RouletteSpiel::hinzufuegen_wette)
        .def("spieler_erstellen", &Roulette::RouletteSpiel::spieler_erstellen)
        .def("spieler_hinzufuegen", &Roulette::RouletteSpiel::spieler_hinzufuegen)
        .def("spieler_anzeigen", &Roulette::RouletteSpiel::spieler_anzeigen)
        .def("spielen", &Roulette::RouletteSpiel::spielen)
        .def("get_farbe", &Roulette::RouletteSpiel::get_farbe)
        .def("get_spieler", &Roulette::RouletteSpiel::get_spieler)
        .def("wette_platzieren", &Roulette::RouletteSpiel::wette_platzieren)
        .def("gewinne_berechen", &Roulette::RouletteSpiel::gewinne_berechen)
        .def("starte_spiel", &Roulette::RouletteSpiel::starte_spiel);
}

    


PYBIND11_MODULE(wette,m){
    m.doc() = "Wette";
    py::class_<Roulette::Wette>(m, "Wette")
        .def(py::init<size_t, const std::string&>())
        .def("get_betrag", &Roulette::Wette::get_betrag)
        .def("get_wetttyp", &Roulette::Wette::get_wetttyp)
        .def("set_betrag", &Roulette::Wette::set_betrag)
        .def("set_wetttyp", &Roulette::Wette::set_wetttyp);
        }