//Utilizzando i puntatori e l'operatore di de-referenziazione scambia il valore di due variabili

#include <stdio.h>
 int main(){
    int x = 5;
    int y = 3;
    int *ptrx = &x; //associo la x a questo puntatore
    int *ptry = &y; // associo la y a questo puntatore
    //funzione scambio
    int tmp = *ptrx;
    *ptrx = *ptry;
    *ptry = tmp;

    printf("x e' uguale a %d\n", *ptrx);
    printf("y e' uguale a %d", *ptry);

    return 0;



 }