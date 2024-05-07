#include<iostream>

using namespace std;

int main() {

    // dichiaro le variabili di input
    int nPersone;
    int nBottiglie;
    int nVino;

    // dichiaro la variabile di output
    float conto;

    // dichiaro le variabili di lavoro e le costanti
    int totalePrezzoPersone;
    float totaleBottiglie;
    float totaleVino;

    const int PREZZO_A_PERSONA = 30;
    const float PREZZO_ACQUA = 3.50;
    const float PREZZO_VINO = 18;

    cout << "------------------------- MENU -------------------------------" << endl;
    cout << "- Prezzo fisso a persona: 30€\n- Bottiglia d'acqua: 3.50€\n- Bottiglia di vino: 18€" << endl;
    cout << "--------------------------------------------------------------" << endl;

    cout << "\nInserisci il numero di persone presenti al tavolo: ";
    cin >> nPersone;

    cout << "Inserisci il numero di bottiglie d'acqua ordinate: ";
    cin >> nBottiglie;

    cout << "Inserisci il numero di bottiglie di vino ordinate: ";
    cin >> nVino;

    cout << "\n------------------------------------------------------------------\nLe seguenti " << nPersone << " persone al tavolo hanno ordinato\n" 
    << nBottiglie << " bottiglie d'acqua\n"
    << nVino << " bottiglie di vino\n";

    totalePrezzoPersone = nPersone * PREZZO_A_PERSONA;
    totaleBottiglie = nBottiglie * PREZZO_ACQUA;
    totaleVino = nVino * PREZZO_VINO;

    conto = totalePrezzoPersone + totaleBottiglie + totaleVino;

    cout << "Per una spesa complessiva di: " << conto << "€";

    return 0;
}