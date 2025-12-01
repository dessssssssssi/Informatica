/*
Si crei una classe scarpe con gli strectch (linguette adesive col feltro); 
ogni paio di scarpe è caratterizzato dalla dimensione 
(data da un numero intero) e ha tre stretch sulla scarpa destra e tre sulla scarpa sinistra.
Creare due paia di scarpe con gli stretch e per 10 volte estrarre 
casualmente su quale paio di scarpe cambiare da allacciato a slacciato uno 
degli stretch (scelto casualmente) di una delle due scarpe scelta sempre casualmente.
Dopo aver fatto aprire e chiudere per le 10 volte gli stretch, 
stampare la situazione finale delle scarpe; si consideri che 
inizialmente tutti gli stretch sono slacciati.
*/

#include "scarpe.h"

using namespace std;

int main() {
    srand(time(NULL));

    Scarpe s1(38);
    Scarpe s2(41);

    for (int i = 0; i < 10; i++) {
        if (rand() % 2)
            s1.cambiaStretchCasuale();
        else
            s2.cambiaStretchCasuale();
    }
    cout << "Situazione finale delle scarpe:\n";
    s1.stampa();
    s2.stampa();

    return 0;
}