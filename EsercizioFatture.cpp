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


    cout << "inserire il compratore ";
    cin >> compratore;
    
    cout << "inserire il venditore ";
    cin >> venditore;

    do {
        cout << "inserire codice ";
        cin >> cod;

        cout << "inserire desc ";
        cin >> desc;

        cout << "inserire quantita ";
        cin >> quant;

        cout << "inserire prezzo unitario ";
        cin >> pU;

        cout << "inserire aliquota iva ";
        cin >> iva;

        totProdotto = (pU * quant) + ((pU * quant) * 22 / 100);
        cout << cod << " " << desc << " " << quant << " " << pU << " " << iva << " " << totProdotto<<endl;

    } while (cod != "stop");



}