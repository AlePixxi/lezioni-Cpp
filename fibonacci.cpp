#include <iostream>

using namespace std;

int main() {


/*
1 + 2 = 3
3 + 2 = 5
5 + 3 = 8


0 1 1 2 3 5 8 13 .....

n = (n-1) + (n-2)


5

0 
1 
1 
2 
3
*/
int contatore = 0;
int numeroFinale;
cin>> numeroFinale;


/*
    for (int i=0;i<numeroFInale; i++) {
    }
*/

while (contatore < numeroFinale) {

    contatore++;

    

    cout << contatore ; 
}



}