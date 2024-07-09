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
    int  min = 0;
    int max = 0;

    float mediaSpeseIva;
    float mediaSpeseNoIva;
    float totPSenzaIva;

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

        totPSenzaIva +=(pU * quant);

        // condizione && condizione      comdizione || condizione
        if (max < quant || max == 0) {

                    max = quant ;

                    descMaxQuantita = desc;
                }
            

        if (min > quant || min == 0) {

            min = quant ;

            descMinorQuantita = desc;
        
        }

    } while (cod != "stop");

    cout << totaleFattura << endl;
    cout << nProdotti     << endl;

    if (nProdotti > 1) {

        // Descrizione del prodotto comprato in minor quantità
        // Descrizione del prodotto comprato in maggior quantità
        // media delle spese sia con che senza IVa

        mediaSpeseIva =  totaleFattura / nProdotti;
        mediaSpeseNoIva=totPSenzaIva / nProdotti;


        cout << mediaSpeseIva << endl;
        cout << descMinorQuantita << endl;
        cout << descMaxQuantita << endl;
        cout << mediaSpeseNoIva;
    }


}