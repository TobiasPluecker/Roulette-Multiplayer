#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "/home/odin/Schreibtisch/poose2/include/roulette/wette.hpp"



namespace Roulette {
    class Spieler {
        public:
            Spieler(const std::string& spielername) : name(spielername), guthaben(1000) {};

            void einsaetze_platzieren(const Wette& wette);
            //void gewinn_verrechnen();
            void set_name(std::string neuer_name);
            std::string get_name() const;
            void wette_anzeigen() const;
            void guthaben_festlegen(size_t geld);
            size_t get_guthaben() const;
            void gewinn_berechnen(int zahl, std::string farbe);
            void guthaben_aktuallisieren(size_t betrag_);
            Wette get_wette() const;
            int get_wettarray_size();
            


        

        private:
            std::string name;
            size_t guthaben;
            std::vector<Wette> wetten;

    };
}

