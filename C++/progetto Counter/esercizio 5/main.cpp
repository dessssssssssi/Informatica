/*Si crei una classe per rappresentare giacche a vento, le giacche a vento dovranno essere caratterizzate 
dalla taglia (numeri interi positivi tra 30 e 60) e  dalla percentuale di chiusura della cerniera, scrivere
i metodi per poter aprire o chiudere completamente la cerniera o aprirla o chiuderla di un certa percentuale
passata come argomento quando viene invocato il metodo, creare ovviamente anche i metodi per poter conoscere
la taglia, la percentuale di chiusura di una cerniera, se è chiusa completamente la cerniera.
Dopo aver creato la classe testarla creando due giacche a vento con le taglie decise dall’utente,
per ogni giacca per 4 volte far aprire e chiudere la cerniera di quantità casuali tra 10 e 50. 
Verificare poi quale tra le due giacche a vento ha il valore dato dalla percentuale di  chiusura della giacca a vento maggiore.*/

#ifndef GIACCA_H
#define GIACCA_H

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    giacca g[2];
    int t=0;
    for(int i=0; i<2; i++){
        cout << "inserisci la taglia (30-60): ";
        cin >> t;
        g.setTaglia(t);                             
    }

    srand(time(NULL));
    for(int i=0; i<2; i++){
        g[i].setPercentuale(rand()%100+1);

    }

    for(int i=0; i<2;i++){
        for(int j=0; j<4; j++){
            cout <<"la giacca e' stata aperta del " << g[i].apri() << "percento." << endl;
            cout <<"la giacca e' stata chiusa del " << g[i].chiudi() << "percento." << endl;
        }
    }


    return 0;
}