#include<iostream>

using namespace std;

int main() {

    int base;
    int altezza;

    cin >> base;
    cin >> altezza;

    string strBase = "";
    string strAltezza = "";

    strBase += " ";
    for (int i=0;i<base;i++) {
        strBase += "_";
        strAltezza += " ";
    }
    cout << strBase << endl;

    for (int i=0;i<altezza-1;i++) {
        cout << "|" + strAltezza + "|"<< endl;
    }

    cout <<"|" + strBase.substr(1) + "|"<< endl;
}