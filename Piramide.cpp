#include <iostream>

using namespace std;

int main() {
    int altezzaP;
    string carattereP;

    cout << "inserire altezza: ";
    cin >> altezzaP;
    cout<<"inserire carattere piramide ";
    cin >> carattereP;

    for (int riga = 0; riga < altezzaP;riga++) {

        int numX=riga + (riga+1);
        
        for(int s = 0;s<altezzaP-riga;s++) {

            cout << " ";
        }

        for (int i = 0;i<numX;i++) {

            cout << carattereP;
        }
        cout << endl;
             


    }

              
              


}