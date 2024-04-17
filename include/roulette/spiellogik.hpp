#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include "/home/odin/Schreibtisch/poose2/include/roulette/spieler.hpp"



namespace Roulette {
    class RouletteSpiel {
        public:
  
            RouletteSpiel(int nummer); // Konstruktor

            int drehen();
            //void gewinn_ermitteln();
            //void spieler_hinzufuegen(const std::string& name);
            //void hinzufuegen_wette(Spieler spieler, Wette wette);
            void spieler_erstellen(std::string a);
            void spieler_hinzufuegen(Spieler neuer_spieler);
            void spieler_anzeigen();
            int spielen();
            std::string get_farbe(int zahl);
            Spieler get_spieler(int indx);
            void wette_platzieren(std::string spielername, size_t hoehe, std::string typ);
            void gewinne_berechen(int zahl);
            void starte_spiel(int runden);
            size_t guthaben(std::string spielername);   
            std::vector<std::string> get_spieler_namen();
            void set_host();
            bool get_pause();
            int get_spieler_anz();
            bool get_gestartet();
            void set_gestartet();
            std::vector<std::string> alle_wetten_in_einer_lobby();
            int get_mom_zahl();
            int get_runde();
            std::vector<std::string> bestenliste();
            


        private:
            std::map<int, std::string> rad = {
                {0, "grün"},
                {1, "rot"},
                {2, "schwarz"},
                {3, "rot"},
                {4, "schwarz"},
                {5, "rot"},
                {6, "schwarz"},
                {7, "rot"},
                {8, "schwarz"},
                {9, "rot"},
                {10, "schwarz"},
                {11, "schwarz"},
                {12, "rot"},
                {13, "schwarz"},
                {14, "rot"},
                {15, "schwarz"},
                {16, "rot"},
                {17, "schwarz"},
                {18, "rot"},
                {19, "rot"},
                {20, "schwarz"},
                {21, "rot"},
                {22, "schwarz"},
                {23, "rot"},
                {24, "schwarz"},
                {25, "rot"},
                {26, "schwarz"},
                {27, "rot"},
                {28, "schwarz"},
                {29, "schwarz"},
                {30, "rot"},
                {31, "schwarz"},
                {32, "rot"},
                {33, "schwarz"},
                {34, "rot"},
                {35, "schwarz"},
                {36, "rot"},

                };

            std::vector<Spieler> spielerliste;
            size_t einsatz;
            size_t gewinn;
            int spielerzahl = 0;
            int id;
            std::string host;
            bool pause = 0;
            bool gestartet = 0;
            int runde = 1;
            int mom_zahl = 0;

    };

    
}