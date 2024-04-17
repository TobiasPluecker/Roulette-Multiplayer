#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/spiellogik.hpp"
#include "/home/odin/Schreibtisch/poose2/include/roulette/wette.hpp"


#include <pybind11/pybind11.h>


namespace py = pybind11;
using namespace Roulette;


PYBIND11_MODULE(wette,m){
    m.doc() = "Wette";
    py::class_<Roulette::Wette>(m, "Wette")
        .def(py::init<size_t, const std::string&>())
        .def("get_betrag", &Roulette::Wette::get_betrag)
        .def("get_wetttyp", &Roulette::Wette::get_wetttyp)
        .def("set_betrag", &Roulette::Wette::set_betrag)
        .def("set_wetttyp", &Roulette::Wette::set_wetttyp);
}



