#include <iostream> // comando per includere le librerie (file C++ scritti da altri). iostream è una delle librerie che servono sempre

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
    std::cout << "Hello World!";

    return 0; // bisogna specificare un valore di ritorno (o di output, come ti piace di più) perché è stato detto quando è stat creata la funzione (int main ...)
}