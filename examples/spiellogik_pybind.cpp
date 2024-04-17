#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/spiellogik.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/wette.hpp"


#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/complex.h>
#include <pybind11/functional.h>




namespace py = pybind11;
using namespace Roulette;


PYBIND11_MODULE(spiellogik,m){
    m.doc() = "Spielogik";
   py::class_<Roulette::RouletteSpiel>(m, "RouletteSpiel")
        .def(py::init())
        .def("drehen", &Roulette::RouletteSpiel::drehen)
        .def("spieler_erstellen", [](Roulette::RouletteSpiel& self, const std::string& name) {
            self.spieler_erstellen(name);
        })
        .def("spieler_hinzufuegen", &Roulette::RouletteSpiel::spieler_hinzufuegen)
        .def("spieler_anzeigen", &Roulette::RouletteSpiel::spieler_anzeigen)
        .def("spielen", &Roulette::RouletteSpiel::spielen)
        .def("get_farbe", &Roulette::RouletteSpiel::get_farbe)
        .def("get_spieler", &Roulette::RouletteSpiel::get_spieler)
        .def("wette_platzieren", &Roulette::RouletteSpiel::wette_platzieren)
        .def("gewinne_berechen", &Roulette::RouletteSpiel::gewinne_berechen)
        .def("starte_spiel", &Roulette::RouletteSpiel::starte_spiel)
        .def("guthaben", &Roulette::RouletteSpiel::guthaben)
        .def("get_spieler_namen", &Roulette::RouletteSpiel::get_spieler_namen);
}