#include <gtest/gtest.h>
#include "/home/odin/Schreibtisch/poose2/src/spiellogik.cpp"
#include "/home/odin/Schreibtisch/poose2/src/wette.cpp"
#include "/home/odin/Schreibtisch/poose2/src/spieler.cpp"


int main() {
    Roulette::RouletteSpiel rs(1);
    

    rs.spieler_erstellen("Jawad");
    rs.starte_spiel(5);

    //rs.spieler_erstellen("Sardar");

    //rs.spieler_erstellen("Tobias");
    //Roulette::Spieler spieler3("Tobias");
    //rs.spieler_hinzufuegen(spieler3);
    //rs.spieler_anzeigen();
    //std::cout << rs.guthaben("Jawad") << std::endl;

    //rs.spieler_erstellen("Test");

    //rs.starte_spiel(1);

    //int temp = rs.drehen();
    //std::cout << rs.get_farbe(temp) << std::endl;

/*
    std::cout << "Nach dem verrechnen: " << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(0).get_name() <<  ": " << rs.get_spieler(0).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(1).get_name() <<  ": " << rs.get_spieler(1).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(2).get_name() <<  ": " << rs.get_spieler(2).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(3).get_name() <<  ": " << rs.get_spieler(3).get_guthaben() << std::endl; 

    rs.wette_platzieren("Jawad", 100, "rot");
    rs.wette_platzieren("Tobias", 500, "schwarz");
    rs.wette_platzieren("Sardar", 400, "schwazr");
    rs.wette_platzieren("Test", 150, "rot");

    std::cout << "Nach dem verrechnen: " << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(0).get_name() <<  ": " << rs.get_spieler(0).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(1).get_name() <<  ": " << rs.get_spieler(1).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(2).get_name() <<  ": " << rs.get_spieler(2).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(3).get_name() <<  ": " << rs.get_spieler(3).get_guthaben() << std::endl; 

    int zahl_der_runde1 = rs.spielen();
    rs.gewinne_berechen(zahl_der_runde1);

    std::cout << "Nach dem verrechnen: " << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(0).get_name() <<  ": " << rs.get_spieler(0).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(1).get_name() <<  ": " << rs.get_spieler(1).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(2).get_name() <<  ": " << rs.get_spieler(2).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(3).get_name() <<  ": " << rs.get_spieler(3).get_guthaben() << std::endl; 

    int zahl_der_runde2 = rs.spielen();
    rs.gewinne_berechen(zahl_der_runde2);


    rs.wette_platzieren("Jawad", 50, "rot");
    rs.wette_platzieren("Tobias", 500, "schwarz");
    rs.wette_platzieren("Sardar", 600, "schwazr");
    rs.wette_platzieren("Test", 150, "rot");
     

    std::cout << "Nach dem verrechnen: " << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(0).get_name() <<  ": " << rs.get_spieler(0).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(1).get_name() <<  ": " << rs.get_spieler(1).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(2).get_name() <<  ": " << rs.get_spieler(2).get_guthaben() << std::endl;
    std::cout << "Guthaben von " << rs.get_spieler(3).get_name() <<  ": " << rs.get_spieler(3).get_guthaben() << std::endl; 



    

    Roulette::Wette wette1(50, "rot");
    spieler1.einsaetze_platzieren(wette1);
    spieler1.wette_anzeigen();


    Roulette::Wette wette2(100, "schwarz");
    spieler2.einsaetze_platzieren(wette2);
    spieler2.wette_anzeigen();


    Roulette::Wette wette3(1000, "rot");
    spieler3.einsaetze_platzieren(wette3);
    spieler3.wette_anzeigen();



    rs.spieler_anzeigen();

    std::cout << "Guthaben von Spieler1 = " << spieler1.get_guthaben() << std::endl;
    std::cout << "Guthaben von Spieler2 = " << spieler2.get_guthaben() << std::endl;
    std::cout << "Guthaben von Spieler3 = " << spieler3.get_guthaben() << std::endl;

    int temp = rs.spielen();
    std::string tempf = rs.get_farbe(temp);
    

    spieler1.gewinn_berechnen(temp, tempf);
    spieler2.gewinn_berechnen(temp, tempf);
    spieler3.gewinn_berechnen(temp, tempf);


    std::cout << "Guthaben von Spieler1 = " << spieler1.get_guthaben() << std::endl;
    std::cout << "Guthaben von Spieler2 = " << spieler2.get_guthaben() << std::endl;
    std::cout << "Guthaben von Spieler3 = " << spieler3.get_guthaben() << std::endl;
*/



    return 0;
}

