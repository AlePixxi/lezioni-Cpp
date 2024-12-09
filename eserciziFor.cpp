#include <iostream>

using namespace std;

int main (){
    /* stampa i numeri da 1 a 10*/
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    /*Inserito un numero N dall' utente, stampa i primi N numeri*/

    int N, somma = 0;
    cout << "Inserisci un numero: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        somma += i;
    }

    cout << "La somma dei primi " << N << " numeri è: " << somma << endl;


    /*Inserito dall'utente un numero, stampane la tabellina*/


    /*Scritta una parola dall' utente, stampa lettera per lettera*/
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;

    for (int i = 0; i < parola.length(); i++) {
        cout << parola[i] << endl;
    }


    /*Scritta una parola dall'utente, conta il numero delle vocali*/


    // tabella di verita and
    bool values[] = {true, false};
    cout << "AND Truth Table\n";
    cout << "A\tB\tResult\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            bool result = values[i] && values[j];
            cout << values[i] << "\t" << values[j] << "\t" << result << "\n";
        }
    }


}