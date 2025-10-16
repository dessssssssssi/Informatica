//Crea un puntatore e fallo puntare ad una variabile di tipo int. Infine incrementa il valore della variabile utilizzando il puntatore.

#include <stdio.h>
 int main(){
    int x = 6;   //dichiaro la variabile
    int *ptrx = &x;  // associo la variabile al puntatore
    (*ptrx)++; //aumento il valore del puntatore
    printf("il valore della variabile e' : %d", *ptrx);    //stampo il valore



    return 0;
 }