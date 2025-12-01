#include "scarpe.h"


Scarpe::Scarpe(int dim) {
    dimensione = dim;
    for (int i = 0; i < 3; i++) {
        destra[i] = false;
        sinistra[i] = false;
    }
}
void Scarpe::cambiaStretchCasuale() {
    int sceltaDestra = rand() % 2;
    int n = rand() % 3;

    if (sceltaDestra)
        destra[n] =! destra[n];
    else
        sinistra[n] =! sinistra[n];
}
void Scarpe::stampa() {
    cout << "Scarpe (dimensione " << dimensione << ")\n";
    cout << "  Destra:  ";
    for (int i = 0; i < 3; i++)
        cout << (destra[i] ? "[chiuso] " : "[aperto] ");
    cout << "\n  Sinistra:";
    for (int i = 0; i < 3; i++)
        cout << (sinistra[i] ? " [chiuso]" : " [aperto]");
    cout << "\n";
}