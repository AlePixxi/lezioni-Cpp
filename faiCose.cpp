#include <iostream>

using namespace std;

int main (){
    string programma ="avviato";

    while(programma == "avviato") {
        

        cout << "Continuare ad eseguire il programma? ";
        string risposta;
        cin>> risposta;

        if (risposta == "si") {
            cout << "continuo..." << endl;
        } else if( risposta == "no"){

            cout << "smetto..." << endl;
             programma = "spento";
        }
        else {

         cout << "non ho capito" << endl; 
        }
        
        


        
    }
}