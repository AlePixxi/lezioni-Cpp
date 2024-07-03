#include <iostream>

using namespace std;

int main() {

    string compratore;
    string venditore;

    string cod;
    string desc;
    int quant;
    float pU;
    int iva;
    float totProdotto;

    float totaleFattura;

    int nProdotti = 0;

    string descMinorQuantita;
    string descMaxQuantita;
    int  min;

    cout << "inserire il compratore ";
    cin >> compratore;
    
    cout << "inserire il venditore ";
    cin >> venditore;

    do {
       
        cout << "inserire codice ";
        cin >> cod;
    
        if (cod == "stop") continue;

        nProdotti++;

        cout << "inserire desc ";
        cin >> desc;

        cout << "inserire quantita ";
        cin >> quant;

        cout << "inserire prezzo unitario ";
        cin >> pU;

        cout << "inserire aliquota iva ";
        cin >> iva;

        totProdotto = (pU * quant) + ((pU * quant) * iva / 100);
        cout << cod << " " << desc << " " << quant << " " << pU << " " << iva << " " << totProdotto<<endl;

        totaleFattura += totProdotto;


    } while (cod != "stop");

    cout << totaleFattura << endl;
    cout << nProdotti;

    if (nProdotti > 1) {

        // Descrizione del prodotto comprato in minor quantità
        // Descrizione del prodotto comprato in maggior quantità
        // Totale spese senza IVA e media delle spese sia con che senza IVA



    }

}