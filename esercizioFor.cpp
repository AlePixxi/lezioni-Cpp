// stampa i numeri da 1 a 10

#include<iostream>

using namespace std;

int main()  {

    cout << "---------------------------------------------- ESERCIZIO 1 ----------------------------------------------\n";

    for(int N = 1;N<11;N++) {

        cout << N << endl;
    }

    cout << "---------------------------------------------- ESERCIZIO 2 ----------------------------------------------\n";

    int N;
    cout << "Inserisci il numero: ";
    cin>>N;

    for(int i = 1;i < N+1;i++) {
        cout<<i << endl;
    }

    
    cout << "---------------------------------------------- ESERCIZIO 3 ----------------------------------------------\n";

int NU;
cin>>NU;

for(int i = NU;i > 0;i--)

    cout<<i<<endl;

}