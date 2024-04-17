#include "/home/odin/Schreibtisch/poose2/src/spiellogik.cpp"
#include "/home/odin/Schreibtisch/poose2/src/spiel.cpp"
#include "/home/odin/Schreibtisch/poose2/src/wette.cpp"
#include "/home/odin/Schreibtisch/poose2/src/spieler.cpp"




int main() {
    Roulette::Spiel s;
    s.lobby_erstellen();
    s.lobby_erstellen();

    std::cout << "Ist Tobias Host: " << s.lobby_beitreten(1, "Tobias") << std::endl;
    
    s.lobby_beitreten(1, "Tom");
    s.lobby_beitreten(2, "Sardar");
    s.lobby_beitreten(1, "Jawad");
    
    s.lobby_erstellen();
    s.lobby_beitreten(3, "nix");
    s.lobbys_anzeigen(); 
    s.wetten(1, "Tobias", 1000, "1");
    s.wetten(1, "Tom", 500, "ungerade");
    
    std::cout << "Guthaben Tobias: " << s.guthaben(1, "Tobias") << std::endl;

    std::cout << "Guthaben Tobias: " << s.guthaben(1, "Tobias") << std::endl;
    //s.wetten(2, "Sardar", 100, "rot");
    s.wetten(1, "Jawad", 30, "rot");
    //s.spielen(2);
    //std::cout << "Guthaben Sardar: " << s.guthaben(2, "Sardar") << std::endl;
    /*
    std::vector<std::string> a = s.lobby_mitglieder(2);
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << std::endl;
    }
    */

    std::cout << " " << std::endl;

    std::cout << s.spiel_gestartet(1) << std::endl;
    std::cout << s.spiel_gestartet(2) << std::endl;
    s.spiel_beginnen(2);
    s.spiel_beginnen(1);
    std::cout << s.spiel_gestartet(2) << std::endl;
    std::cout << s.spiel_gestartet(1) << std::endl;
    
    std::vector<std::string> b = s.wetten_im_client_anzeigen(1);
    for (int i = 0; i < b.size(); i++) {
        std::cout << b[i] << std::endl;
    }
    
    s.spielen(1);
    std::cout << "Teeeee: " << s.farbe_zu_zahl(5, 1) << std::endl;

    std::cout << "Zahl 1 " << s.zahl_der_lobby(1) << std::endl;
    std::cout << "Zahl 2 " << s.zahl_der_lobby(2) << std::endl;
    std::vector<std::string> bb = s.bestenliste_return(1);
    for (int i = 0; i < bb.size(); i++) {
        std::cout << bb[i] << std::endl;
    }





    return 0;
}