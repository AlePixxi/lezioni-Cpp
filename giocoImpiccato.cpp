#include<iostream>

using namespace std;

int main() { 

    string parolaDaIndovinare;
    bool gioco = true;
    bool vittoria = false;
    char letteraInserita;

    cout << "Inserisci la parola: ";

    cin >> parolaDaIndovinare;
    int lungehzzaParolaDaIndovinare = parolaDaIndovinare.length();

    char lettereIndovinate[lungehzzaParolaDaIndovinare];
    int numeroLettereIndovinate = 0;

    for (int i=0;i<lungehzzaParolaDaIndovinare;i++) {
        lettereIndovinate[i] = '_';

    }

    while(gioco) {

        cout << "Parola da indovinare: ";
        for (int i=0;i<lungehzzaParolaDaIndovinare;i++) {
            if (lettereIndovinate[i] == '\0')
                lettereIndovinate[i] = '_';
            cout << lettereIndovinate[i];
        }
        
        cout << "\n===========================" << endl;

        cout << "\nInserisci la lettera: ";
        cin >> letteraInserita;

        for (int i=0;i<lungehzzaParolaDaIndovinare;i++) {
            if (parolaDaIndovinare[i] == letteraInserita) {
                lettereIndovinate[i] = letteraInserita;
                numeroLettereIndovinate++;
            }
        }

        if (numeroLettereIndovinate == lungehzzaParolaDaIndovinare) {
            gioco = false;
            vittoria = true;
        } else if (letteraInserita == '.') {
            gioco = false;
            vittoria = false;
        }
    }

    if (vittoria) {

        cout << "Complimenti! Hai vinto la partita indovinando: " << parolaDaIndovinare;
        
    } else {
        cout << "Peccato! La prossima volta andrà meglio. Il tuo risultato per la parola " << parolaDaIndovinare << " è stato il seguente:" << endl;
    
        for (int i=0;i<lungehzzaParolaDaIndovinare;i++) {
            if (lettereIndovinate[i] == '\0')
                lettereIndovinate[i] = '_';
            cout << lettereIndovinate[i];
        }
    }

}