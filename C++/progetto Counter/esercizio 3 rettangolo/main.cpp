/*Si crei una classe Rettangolo per memorizzare rettangoli e calcolarne perimetro e area. 
Creare poi un programma che sfruttando la classe scriva i perimetri e le aree di 10 rettangoli, 
il primo con lunghezze dei lati 1 e 2, il secondo con 2 e 3, il terzo con 3 e 4 e così via.*/

#include "rettangolo.h"
#include <iostream>

using namespace std;

int main(){
    rettangolo r1[10];

    for(int i=0; i<10; i++){
        r1[i].setBase(i+1);
        r1[i].setAltezza(i+2);
    }

    for(int i=0; i<10; i++){
        cout << "il rettangolo con base: "<< r1[i].getBase();
        cout << "e altezza: "<< r1[i].getAltezza();  
        cout <<"\n il perimetro e': "<< r1[i].perimetro();
        cout <<"\n l'area e': "<< r1[i].area(); 
    }



}