// crea un vettore di 10 numeri, 
// inzialmente vuoto. stampa ogni numero per ogni riga


#include<iostream>

using namespace std;

int main() {
    int numeri[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << numeri[0]<<endl;
    cout << numeri[1]<<endl;
    cout << numeri[2]<<endl;
    cout << numeri[9]<<endl;

    cout << numeri[0] + numeri[9];
    cout << "-------------------\n";
    int x = numeri[1];

    for(int i=0;i<10;i++) {
        cout <<numeri[i]<<endl;
    }






}
