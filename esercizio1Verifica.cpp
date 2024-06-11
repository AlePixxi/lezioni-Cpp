#include <iostream>

using namespace std;

int main(){

    float conto;
    int nPersone;
    int nBottiglie;
    int nVino;
    int personeTot;
    float bottiglieTot;
    int vinoTot;
    float totaleSerata;

    string risposta = "";

    while (risposta != "fine") {

        cin>> nPersone;
        cin >> nBottiglie;
        cin >> nVino;

        personeTot= nPersone * 30;
        bottiglieTot= nBottiglie * 3.50;
        vinoTot= nVino * 18;


        conto = personeTot + bottiglieTot + vinoTot;
        totaleSerata += conto;

        cout << "totale tavolo: ";
        cout << conto<<endl;

        cout << "risposta: ";
        cin >> risposta;
    }

    cout << "Totale serata: " << totaleSerata;
    
}