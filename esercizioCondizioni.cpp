/*
    Creare un programma che, stampanto un menu del tipo:
    -------------------------------------
    1) calcola area triangolo
    2) calcola area quadrato/rettangolo
    -------------------------------------
    una volta che l'utente ha scritto a schermo che voce del menu selezionare (1 o 2)
    il programma dovrà poter far inserire all' utente i numeri per base e altezza 
    e restituire la misura dell' area della figura scelta.
    Altra cosa da aggiungere, quando viene selezionata la voce 2, 
    il programma deve stampare a schermo un messaggio per indicare all' utente
    se la figura scelta sia un quadrato o un rettangolo (oltre alla misura dell' area).

    esempio di esecuzione:

    -------------------------------------
    1) calcola area triangolo
    2) calcola area quadrato/rettangolo
    ------------------------------------
    -> 1
    inserisci la misura della base: 4
    inserisci la misura dell' altezza: 2
    l' area del triangolo è: 4


    esempio 2:

    -------------------------------------
    1) calcola area triangolo
    2) calcola area quadrato/rettangolo
    ------------------------------------
    -> 1
    inserisci la misura della base: -> 4
    inserisci la misura dell' altezza: -> 4
    stiamo calcolando l'area del QUADRATO   
    l'area del quadrato è 16

    esempio 3:

    -------------------------------------
    1) calcola area triangolo
    2) calcola area quadrato/rettangolo
    ------------------------------------
    -> 1
    inserisci la misura della base: -> 4
    inserisci la misura dell' altezza: -> 10
    stiamo calcolando l'area del RETTANGOLO   
    l'area del rettangolo è 40

*/

#include <iostream>
using namespace std;

int main ()  {

    cout<< "1) calcola area triangolo"<<endl ;
    cout<< "2) calcolare area quadrato/rettangolo" <<endl;

    int menu;

    float at;
    float aqr;

    float baset;
    float baseqr;
    float altezzat;
    float altezzaqr;


    cout<<"seleziona la voce del menu ";
    cin>>menu;
    

    

    if(menu == 1)
    {
        cout<< "selezionare base ";
        cin>> baset;

        cout<< "selezionare altezza ";
        cin>> altezzat;
        at = (baset * altezzat) / 2;
        cout<<at;

    } else if(menu == 2) {

        cout<< "selezionare base ";
        cin>> baseqr;

        cout<< "selezionare altezza ";
        cin>> altezzaqr;

        if (baseqr == altezzaqr) {
            cout << "stiamo calcolando l'area di un quadrato ";

        } else {

            cout << "stiamo calcolando l'area di un rettangolo ";

        }
        aqr = baseqr * altezzaqr;
        cout<< aqr;
    }  else {

        cout<< "scelta non valida";

    }

}