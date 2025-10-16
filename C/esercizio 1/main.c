/*Dichiara una variabile di un tipo a tua scelta (tranne int) e associagli un puntatore,
 infine stampa il valore puntato utilizzando l'operatore di de-referenziazione.*/

 #include <stdio.h>

 int main(){
    float x = 5.2; // ho dichiarato una variabile
    float *ptr = &x; // gli ho associato un puntatore
    printf("%.2f",*ptr);

    return 0;
 }