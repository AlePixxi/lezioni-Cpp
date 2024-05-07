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
    int x;

    x = 7;

    cin>> nPersone;
    cin >> nBottiglie;
    cin >> nVino;

    personeTot= nPersone * 30;
    bottiglieTot= nBottiglie * 3.50;
    vinoTot= nVino * 18;


   conto= personeTot + bottiglieTot + vinoTot;

   cout << conto;
    
}