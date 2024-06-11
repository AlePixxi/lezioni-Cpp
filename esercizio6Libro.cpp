#include <iostream>

using namespace std;

int main() {


    float max = -1;
    float mediaPrezzi;
    float mediaPercSconto;

    for (int i=0;i<4;i++) {
        
        string codice;
        float prezzo;
        float percSconto;

        float prezzoScontato;

        cout << "Codice del prodotto: ";
        cin >> codice;

        cout << "Prezzo del prodotto: ";
        cin >> prezzo;

        cout << "Percentuale di sconto del prodotto: ";
        cin >> percSconto;

        prezzoScontato = prezzo - ((prezzo * percSconto)/100);
        cout << "Prezzo scontato del prodotto: " << prezzoScontato  << "€" << endl;

        if (prezzoScontato > max) {
            max = prezzoScontato;
        }

    }

}