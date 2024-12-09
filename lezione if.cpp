#include<iostream>

using namespace std;

int main() {

    10 > 2; // true (1)
    2 > 10; // false (0)

    //2 = 20; // non è una condizione
    2 == 20; // false
    2 != 20; // true

    2 >= 1; // true
    10 <= 3; // false    
    !2;
    // if ( [condizione] ) { [codice] }
    // else { [codice] }
    if (!(2 > 10)) {
        cout << "2 è maggiore di 10\n";
    } 
    else {
        cout << "2 non è maggiore di 10\n";
    }

    int a = 50;
    int b = 20;
    if (a == b) {
        cout << "a uguale a b" << endl;
    } else if (a > b) {
        cout << "a maggiore di b" << endl;
    } else {
        cout << "a minore di b" << endl;
    }

    cout << "\nsto continuando";
}