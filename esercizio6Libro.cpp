#include <iostream>

using namespace std;

int main() {
    


    float max = -1;
    float mediaPrezzi;
    float mediaPercSconto;

    float totaleSconti;

    float totalePrezziProdotti;

    for (int i=0;i<4;i++) {
        
        string codice;
        float prezzo;
        float percSconto;

        float sconto;

        float prezzoScontato;

        cout << "Codice del prodotto: ";
        cin >> codice;

        cout << "Prezzo del prodotto: ";
        cin >> prezzo;

        cout << "Percentuale di sconto del prodotto: ";
        cin >> percSconto;

        sconto = (prezzo * percSconto)/100;
        totaleSconti += sconto;

        prezzoScontato = prezzo - sconto;
        totalePrezziProdotti += prezzoScontato;
        cout << "Prezzo scontato del prodotto: " << prezzoScontato  << "€" << endl;

        if (prezzoScontato > max) {
            max = prezzoScontato;
        }

    }
    cout << "-------------------------------------------------------" << endl;
    cout << "Media prezzi dei prodotti: " << totalePrezziProdotti/4 << endl;

    cout << "Media sconti dei prodotti: " << totaleSconti/4 << endl;

    cout << "Prezzo più alto: " << max << endl;
    cout << "Somma degli sconti effettutati: " << totaleSconti << endl;

}