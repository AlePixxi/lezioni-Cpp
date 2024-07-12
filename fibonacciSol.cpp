#include <iostream>
using namespace std;

int main() {
    int numeroPianiPiramide;
    cout << "Inserisci il numero di righe per la piramide: ";
    cin >> numeroPianiPiramide;

    // per ogni piano della piramide
    for(int i = 1; i <= numeroPianiPiramide; i++) {

        // Stampare spazi
        for(int j = 1; j <= numeroPianiPiramide - i; j++) {
            cout << " ";
        }
        // Stampare asterischi
        for(int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Andare a capo
        cout << endl;
    }

    return 0;
}
