#include <iostream>

// using namespace std;

int main() {

    std::cout << "----------------------------INIZIO PROGRAMMA-----------------------------\n\n";

    std::cout << "leggo le variabili" << std::endl; // endl si trova dentro il namespace std e permette di mandare a capo una linea dopo che è stata stampata a schermo
    // variabili di output
    float conto;

    // variabili di input
    int nPersone;
    int nBottigle;
    int nVino;

    // variabili di lavoro
    int nPeroneTot;
    float nBottiglieTot;
    int nVinoTot;

    std::cout << "Inserisci il numero di persone a tavola: ";
    std::cin >> nPersone; // con cin permettiamo all'utente di scrivere sulla console, cin salva quello che ha scritto l'utente in una variabile di output, che prendiamo e mettiamo in nPersone
    std::cout << "Hai inserito " << nPersone << " persone" << std::endl;
    
    std::cout << "npersone * 30 e lo salvo in npersoneTot" << std::endl;
    std::cout << "nbottigle * 3.50 e lo salvo in nbottigletot" << std::endl;
    std::cout << "nvino * 18 e lo salvo in nvinotot" << std::endl;
    std::cout << "somma = npersoneTot + nbottigletot + nvinotot" << std::endl;
    std::cout << "ritorna somma";
    std::cout << "\n\n----------------------------FINE PROGRAMMA-----------------------------\n\n";
    
    return 0;
}

