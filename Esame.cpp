/*
calcolare la media voti dei promossi SIA e quante persone sono state bocciate tra SIA e AFM

media numeri pari SIA

*/

#include <iostream>

using namespace std;

int main() {

    int votiSIA = 0; // input -> viene scritta dall' utente
    int votiTotaliPromossiSIA = 0; // lavoro

    float mediaVotiPromossiSIA = 0; // output -> sta nel cout, quella che vuole il programma
    int nBocciatiSIA = 0; // output -> sta nel cout, quella che vuole il programma

    int votiAFM = 0; // input -> viene scritta dall' utente
    int votiTotaliPromossiAFM; // lavoro
    int nBocciatiAFM = 0; // output -> sta nel cout, quella che vuole il programma
    int nPromossiAFM = 0; // lavoro

    float mediaVotiPromossiAFM = 0; // output -> sta nel cout, quella che vuole il programma

    int nPromossiSIA = 0; // lavoro

    int sommaVotiPariSIA; // lavoro
    int sommaVotiPariAFM; // lavoro

    int numeroVotiPariSIA; // lavoro
    int numeroVotiPariAFM; // lavoro
    float mediaVotiPariSIA; // output -> sta nel cout, quella che vuole il programma
    float mediaVotiPariAFM; // output -> sta nel cout, quella che vuole il programma

    do {

        // leggi i voti sia
        cout << "Voti SIA: ";
        cin >> votiSIA;

        // leggi i voti afm
        cout << "Voti AFM: ";
        cin >> votiAFM;

        // controlla se il voto è sufficiente e nel caso somma i totali e conta un promosso
        if (votiSIA >= 60) {
            votiTotaliPromossiSIA += votiSIA;
            nPromossiSIA++;
        } else nBocciatiSIA++;

        // controlla se il voto è sufficiente e nel caso somma i totali e conta un promosso
        if (votiAFM >= 60) {
            votiTotaliPromossiAFM += votiAFM;
            nPromossiAFM++;
        } else nBocciatiAFM++;

        // controlla se il voto è pari e somma agli altri voti pari e conta un voto pari in più
        if (votiSIA % 2 == 0) {
            sommaVotiPariSIA += votiSIA;
            numeroVotiPariSIA++;
        }

        // controlla se il voto è pari e somma agli altri voti pari e conta un voto pari in più
        if (votiAFM % 2 == 0) {
            sommaVotiPariAFM += votiAFM;
            numeroVotiPariAFM++;
        }

        } while (votiSIA !=0 || votiAFM !=0);

    // calcolo la media dei voti dei promossi
    mediaVotiPromossiSIA = votiTotaliPromossiSIA / nPromossiSIA;
    mediaVotiPromossiAFM = votiTotaliPromossiAFM / nPromossiAFM;

    // calcolo la media dei voti pari
    mediaVotiPariSIA = sommaVotiPariSIA / numeroVotiPariSIA;
    mediaVotiPariAFM = sommaVotiPariAFM / numeroVotiPariAFM;


    // stampo i risultati
    cout << "Media voti dei promossi SIA: " << mediaVotiPromossiSIA << endl;
    cout << "Media voti dei promossi AFM: " << mediaVotiPromossiAFM << endl;

    cout << "Numero bocciati SIA: " << nBocciatiSIA << endl;
    cout << "Numero bocciati AFM: " << nBocciatiAFM << endl;

    cout << "media voti pari SIA: " << mediaVotiPariSIA << endl;
    cout << "Media voti pari AFM: " << mediaVotiPariAFM << endl;
}

