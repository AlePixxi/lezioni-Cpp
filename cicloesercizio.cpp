/*Scrivi un diagramma a blocchi per un programma che continua a
 chiedere all'utente di inserire un numero. 
 Il programma termina quando l'utente inserisce un numero negativo. 
 àAlla fine, il programma stampa la somma di tutti i numeri inseriti. */

#include <iostream>

using namespace std;

int main(){

    int sni;
    int n;


    cin >> n;

    while (n>=0)  {
        sni+=n;
        cin>> n;
    
    };


    cout << "il totale é ";
    cout << sni;

}