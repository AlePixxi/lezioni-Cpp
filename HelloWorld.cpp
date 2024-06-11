#include <iostream> // comando per includere le librerie (file C++ scritti da altri). iostream è una delle librerie che servono sempre
#include <string>

using namespace std;
/*
    Una funzione è un blocco di codice (delimitato da {} dove si possono fare delle operazioni)
    e ritornare all'utente dei risultati.

 STRUTTURA BASE DI UNA FUNZIONE:

    [tipo di output] [nomeDellaFunzione]( [variabili di input della funzione] ) 
    {
        corpo della funzione,
        qui avvengono tutte le operazioni
    }
*/

// funzione main, funzione dalla quale partono TUTTI i programmi C++
int main() {

    string x1;
    cout << x1 <<endl;
    
    /*
        [namespace]::[funzione] <</>> [roba da prendere dalla funzione o passare alla funzione]

        Il namespace è un altro blocco che contiene funzioni, valori e altre cose che noi possiamo 
        andare a utilizzare nei nostri programmi.

        Le freccette vanno lette così:
           funzione << roba da dare in input alla funzione
           funzione >> roba da prendere come output della funzione

        Sostanzialmente il verso delle frecce indica dove il nostro valore deve andare, 
        che sia da una variabile o un dato (come in questo caso) a dentro una funzione (<<) 
        che sia da dentro una funione a dentro una variabile (>>)
    */

    std::string pippo = "ciaooooo\n";
    std::cout << pippo;

    int a = 12;
    int b = 20;

    string c = "20";
    string d = "30";

    float e = 2.5;

    float tot = a + e;

    cout << tot;

    cout << "\n"<< a << a << a << a << a << a << endl;






    std::string pippo2;
    cin >> pippo2;
    cout<< pippo2;

    return 0; // bisogna specificare un valore di ritorno (o di output, come ti piace di più) perché è stato detto quando è stat creata la funzione (int main ...)
}