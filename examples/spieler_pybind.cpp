#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"
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
