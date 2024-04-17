#pragma once

#include <iostream>



namespace Roulette {
    class Wette {
        public:
            Wette(size_t einsatz, const std::string& typ) : betrag(einsatz), wetttyp(typ) {}


            size_t get_betrag() const;
            std::string get_wetttyp() const;
            void set_betrag(size_t neuer_betrag);
            void set_wetttyp(const std::string& neuer_typ);


        private:
            size_t betrag;
            std::string wetttyp;
        

    };
}



