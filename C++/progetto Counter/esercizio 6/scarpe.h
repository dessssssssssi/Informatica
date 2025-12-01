#ifndef SCARPE_H
#define SCARPE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Scarpe {
    private:
        int dimensione;
        int destra[3];
        int sinistra[3];

public:
    Scarpe(int dim);
    void cambiaStretchCasuale();
    void stampa();
};
#endif
 