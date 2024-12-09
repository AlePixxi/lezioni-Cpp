#include<iostream>

using namespace std;

int main(){

    string clienti[8] = {"luca","marco","a","robetro","tommaso","alessio","","t"};
    // punto 1
    for(int i=0;i<8;i++) {
        if (clienti[i]!="")
            cout<< "cliente: "<< clienti[i]<<endl<<"numero camera: "<<i<<endl;
    }
    // punto 2
    cout << "==============ESERCIZIO 2================\n";
    bool tutteLeStanzeSonoOccupate = true;
    for(int i=0;i<8;i++) {
        if(clienti[i]=="") {
            cout<<"stanza numero: "<<i<<" libera\n";
            tutteLeStanzeSonoOccupate=false;
        }
        
    }
           if(tutteLeStanzeSonoOccupate==true)
            cout<<"tutte le stanze sono occupate";

    // punto 3

    // punto 4



}