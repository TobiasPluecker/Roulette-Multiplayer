#include </home/odin/Schreibtisch/poose2/include/roulette/spiel.hpp>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/complex.h>
#include <pybind11/functional.h>


namespace py = pybind11;
using namespace Roulette;


PYBIND11_MODULE(spiel,m) {
    m.doc() = "Spiel";
    py::class_<Roulette::Spiel>(m, "Spiel")
        .def(py::init())
        .def("spiel_beginnen", &Roulette::Spiel::spiel_beginnen)
        .def("spielen", &Roulette::Spiel::spielen)
        .def("lobby_erstellen", &Roulette::Spiel::lobby_erstellen)
        .def("wetten", &Roulette::Spiel::wetten)
        .def("lobby_beitreten", &Roulette::Spiel::lobby_beitreten)
        .def("lobbys_anzeigen", &Roulette::Spiel::lobbys_anzeigen)
        .def("guthaben", &Roulette::Spiel::guthaben)
        .def("existiert_lobby", &Roulette::Spiel::existiert_lobby)
        .def("lobbys_anzeigen_client", &Roulette::Spiel::lobbys_anzeigen_client)
        .def("lobby_loeschen", &Roulette::Spiel::lobby_loeschen)
        .def("lobby_mitglieder", &Roulette::Spiel::lobby_mitglieder)
        .def("spiel_beginnen", &Roulette::Spiel::spiel_beginnen)
        .def("wetten_pl", &Roulette::Spiel::wetten_pl)
        .def("wetten_im_client_anzeigen", &Roulette::Spiel::wetten_im_client_anzeigen)
        .def("mitspieler_anz", &Roulette::Spiel::mitspieler_anz)
        .def("farbe_zu_zahl", &Roulette::Spiel::farbe_zu_zahl)
        .def("zahl_der_lobby", &Roulette::Spiel::zahl_der_lobby)
        .def("runde_einer_lobby", &Roulette::Spiel::runde_einer_lobby)
        .def("bestenliste_return", &Roulette::Spiel::bestenliste_return)
        .def("spiel_gestartet", &Roulette::Spiel::spiel_gestartet);
}