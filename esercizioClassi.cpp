/*
crea un programma che ha un vettore di alunni (10).
il programma deve prendere questi alunni e dividerli in classi.
in una classe avremo tutti gli alunni che iniziano co le lettere dalla A alla P
in un'altra classe tutti gli alunni che iniziano per P-Z

per semplicità definiamo le classi come semplici vettori che contengono i nomi di alunnni



alunni ={
    Paolo,
    Marco,
    Luca
    Arianna,
    Lucia,
    Noemi,
    Sara,
    Cristian,
    Michele,
    Daniel
}

classe1 = {
    Paolo,
    Arianna,
    Cristian,
    Daniel,
    Lucia,
    Luca
}

classe2 = {
    Marco,
    Noemi,
    Sara,
    Michele,
}
*/


#include<iostream>

using namespace std;

int main() {

    string lettera="ABCDEFG";
    string ettera="LMNOPRSTUV";

    string alunni[10]= {
        "Paolo",
        "Marco",
        "Luca",
        "Arianna",
        "Lucia",
        "Noemi",
        "Sara",
        "Cristian",
        "Michele",
        "Daniel"
    };

    string classe1[10];
    string classe2[10];

    for(int i=0;i<10;i++) {

        string alunno=alunni[i];

        for(int j=0;j<8;j++) {

            if(alunno[0]==lettera[j]) {

                classe1[i]=alunno;
                break;

            }
        
        for(int t=0;t<11;t++) {
            if(alunno[0]==ettera[t])

                classe2[i]=alunno;
        }



        }

    }

        for(int i=0;i<10;i++) {

            cout<<classe1[i]<<endl;

        }

    cout<<"=============================================="<<endl;

        for(int i=0;i<10;i++) {

            cout<<classe2[i]<<endl;

        }





}