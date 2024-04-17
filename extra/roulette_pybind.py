try:
    import include
except ImportError as e:
    print("Importing the shared library 'spieler' did not work.")
    print("Is the shared library 'spieler.so' in the same directory as this Python script?")
    print(f"The import caused the following exception: '{e}'")
    print("Exiting")
    exit(1)
else:
    print("Importing the shared library 'spieler' worked.")


from include import Spieler


def main():
    print(f"Module name: '{Spieler.__doc__}'")
   
    s = Spieler("John")
    s.set_name("Jane")
    name = s.get_name()
    print(f"Spielername: {name}")
   
    # Weitere Funktionsaufrufe...
    s.einsaetze_platzieren()
    s.wette_anzeigen()
    s.guthaben_festlegen(100)
    guthaben = s.get_guthaben()
    print(f"Guthaben: {guthaben}")
    s.gewinn_berechnen()
    s.guthaben_aktuallisieren()
   

if __name__ == '__main__':
    main()