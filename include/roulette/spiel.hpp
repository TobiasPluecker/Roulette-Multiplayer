#include "/home/odin/Schreibtisch/poose2/include/roulette/spiellogik.hpp"
/**
 * @file spiel.hpp
 * @brief Hier findet die komplette Lobby verwaltung statt.
 * 
 * Grundsätzlich werden neue Lobbys im Array lobbys gespeichert.
 * Dadurch wird ermöglicht, dass jedes Spiel in einer Lobby unabhänig von den Anderen ist.
 * Jede Aktion wird dann auf der jeweiligen Lobby aufgerufen.
*/



namespace Roulette {
    /**
     * @brief Die Klasse Spiel repräsentiert das Spielgeschehen einer Roulette-Lobby.
     */
    class Spiel {
    public: 
        /**
         * @brief Konstruktor der Spiel-Klasse.
         */
        Spiel() {}

        /**
         * @brief Startet das Spiel in einer bestimmten Lobby.
         * @param lobby Die Lobby, in der das Spiel gestartet werden soll.
         */
        void spiel_beginnen(int lobby);

        /**
         * @brief Führt eine Spielrunde in einer bestimmten Lobby aus.
         * @param lobby Die Lobby, in der das Spiel stattfindet.
         * @return Die gewinnende Zahl der Spielrunde.
         */
        int spielen(int lobby);

        /**
         * @brief Gibt die Spielnummer zurück.
         * @return Die Spielnummer.
         */
        int get_spiel_nr();

        /**
         * @brief Erstellt eine neue Lobby.
         * @return Die Lobby-ID der neu erstellten Lobby.
         */
        int lobby_erstellen();

        /**
         * @brief Tritt einer bestehenden Lobby bei.
         * @param lobby Die Lobby, der beigetreten werden soll.
         * @param name Der Name des Spielers, der beitritt.
         * @return True, wenn der Beitritt erfolgreich war, ansonsten False.
         */
        bool lobby_beitreten(int lobby, std::string name);

        /**
         * @brief Tritt einer bestehenden Lobby bei.
         * @param lobby Die Lobby, der beigetreten werden soll.
         * @param name Der Name des Spielers, der beitritt.
         * @return True, wenn der Beitritt erfolgreich war, ansonsten False.
         */
        bool lobby_beitreten(int lobby, std::string name);

        /**
         * @brief Platziert eine Wette in einer bestimmten Lobby.
         * @param lobby Die Lobby, in der die Wette platziert werden soll.
         * @param name Der Name des Spielers, der die Wette platziert.
         * @param betrag Der Betrag der Wette.
         * @param typ Der Typ der Wette.
         */
        void wetten(int lobby, std::string name, size_t betrag, std::string typ);

        /**
         * @brief Zeigt die verfügbaren Lobbys an.
         */
        void lobbys_anzeigen();

        /**
         * @brief Gibt die Liste der Lobbys für den Client zurück.
         * @return Eine Liste der Lobbys als Vektor von Zeichenketten.
         */
        std::vector<std::string> lobbys_anzeigen_client();

        /**
         * @brief Gibt die Lobby an einem bestimmten Index zurück.
         * @param idx Der Index der gewünschten Lobby.
         * @return Die Lobby an dem angegebenen Index.
         */
        RouletteSpiel get_lobby(int idx);

        /**
         * @brief Gibt das Guthaben eines Spielers in einer bestimmten Lobby zurück.
         * @param lobby Die Lobby, in der das Guthaben abgerufen werden soll.
         * @param name Der Name des Spielers, dessen Guthaben abgerufen werden soll.
         * @return Das Guthaben des Spielers in der Lobby.
         */
        size_t guthaben(int lobby, std::string name);

        /**
         * @brief Überprüft, ob eine bestimmte Lobby existiert.
         * @param lobby Die Lobby, die überprüft werden soll.
         * @return True, wenn die Lobby existiert, ansonsten False.
         */
        bool existiert_lobby(int lobby);

        /**
         * @brief Löscht eine bestimmte Lobby.
         */
        void lobby_loeschen();

        /**
         * @brief Gibt die Liste der Mitglieder einer bestimmten Lobby zurück.
         * @param lobby Die Lobby, deren Mitgliederliste abgerufen werden soll.
         * @return Eine Liste der Mitglieder als Vektor von Zeichenketten.
         */
        std::vector<std::string> lobby_mitglieder(int lobby);

        /**
         * @brief Überprüft, ob das Spiel in einer bestimmten Lobby gestartet wurde.
         * @param lobby Die Lobby, in der das Spiel überprüft werden soll.
         * @return True, wenn das Spiel gestartet wurde, ansonsten False.
         */
        bool spiel_gestartet(int lobby);

        /**
         * @brief Platziert eine spezielle Wette in einer bestimmten Lobby.
         * @param lobby Die Lobby, in der die Wette platziert werden soll.
         * @param name Der Name des Spielers, der die Wette platziert.
         * @param betrag Der Betrag der Wette.
         * @param typ Der Typ der Wette.
         */
        void wetten_pl(int lobby, std::string name, size_t betrag, std::string typ);

        /**
         * @brief Gibt die Liste der Wetten für den Client in einer bestimmten Lobby zurück.
         * @param lobby Die Lobby, deren Wettenliste abgerufen werden soll.
         * @return Eine Liste der Wetten als Vektor von Zeichenketten.
         */
        std::vector<std::string> wetten_im_client_anzeigen(int lobby);

        /**
         * @brief Gibt die Anzahl der Mitspieler in einer bestimmten Lobby zurück.
         * @param lobby Die Lobby, deren Anzahl der Mitspieler abgerufen werden soll.
         * @return Die Anzahl der Mitspieler in der Lobby.
         */
        int mitspieler_anz(int lobby);

        /**
         * @brief Gibt die Farbe zu einer bestimmten Zahl in einer bestimmten Lobby zurück.
         * @param zahl Die Zahl, für die die Farbe abgerufen werden soll.
         * @param lobby Die Lobby, in der die Farbe abgerufen werden soll.
         * @return Die Farbe zu der angegebenen Zahl.
         */
        std::string farbe_zu_zahl(int zahl, int lobby);

        /**
         * @brief Gibt die Zahl der Lobby zurück, in der ein bestimmtes Spiel stattfindet.
         * @param lobby Die Lobby, deren Zahl abgerufen werden soll.
         * @return Die Zahl der Lobby.
        */
        int zahl_der_lobby(int lobby);

        /**
         * @brief Gibt die aktuelle Runde einer bestimmten Lobby zurück.
         * @param lobby Die Lobby, deren Runde abgerufen werden soll.
         * @return Die aktuelle Runde der Lobby.
         */
        int runde_einer_lobby(int lobby);

        /**
         * @brief Gibt die Bestenliste einer bestimmten Lobby zurück.
         * @param lobby Die Lobby, deren Bestenliste abgerufen werden soll.
         * @return Die Bestenliste als Vektor von Zeichenketten.
         */
        std::vector<std::string> bestenliste_return(int lobby);


    private:
        int runden = 10;
        int spiel_nr = 1;
        std::vector<RouletteSpiel> lobbys;
    };
}