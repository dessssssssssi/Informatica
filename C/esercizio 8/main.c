/*Dato il seguente prototipo:
void modificaVariabile(int *variabile);
modifica la variabile passata comne argomento con il valore 42 in modo che la modifica sia visibile anche nel main.*/

#include <stdio.h>

void modificaVariabile(int *variabile);

int main(){

    int x=0;
    int *ptr=&x;
    modificaVariabile(ptr);
    printf("%d",*ptr);
    return 0;
}


void modificaVariabile(int *variabile){
    *variabile=42;
}
