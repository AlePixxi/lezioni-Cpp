#include <iostream>

using namespace std;

int main() {

    // menu iniziale
    cout << "----------------------------------" << endl;

    cout << "1) calcola area triangolo" << endl;
    cout << "2) calcola area quadrato/rettangolo" << endl;

    cout << "----------------------------------" << endl;

    // variabile di scelta del menu
    int scelta;
    cout << "Inserisci il numero della voce che ti interessa: ";
    cin >> scelta;

    // variabili per base e altezza
    float b;
    float h;

    // variabile di output (area)
    float area;

    if (scelta == 1) {

        // calcolare l' area del triangolo

        // faccio valorizzare all'utente le variabili per la base e l'altezza
        cout << "Inserisci la base: ";
        cin >> b;
        cout << "Inserisci l'altezza: ";
        cin >> h;

        cout << "Hai scelto di calcolare l'area del triangolo" << endl;

        area = (b*h) / 2;
        cout << "l'area è di: " << area;
    } else if (scelta == 2) {

        // calcolare l' area del quadrato o rettangolo

        cout << "Inserisci la base: ";
        cin >> b;
        cout << "Inserisci l'altezza: ";
        cin >> h;

        if (b == h) cout << "hai scelto di calcolare l'area del quadrato" << endl;
        else cout << "hai scelto di calcolare l'area del rettangolo" << endl;
        
        area = b * h;
        cout << "l'area è di: " << area;

    } else {
        cout << "Hai inserito un valore non valido";
    }

    return 0;
}