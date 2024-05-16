#include <iostream>

using namespace std;

int main (){

    while (false)
    {
        cout << "ciao"<< endl;
    }

    do {
        cout << "ciao"<< endl;
    } while(false);


    int a = 10;
    int b = 20;

    while (a<b) {
        cout << a<< endl;
        a++;
    }
    cout << "fine programma"<< endl;

    for (int i=0;i<10;i=i+2) {
        cout << "ciao"<< endl;
    }
    

}