//Creare un array di float di dimensione specificata dall'utente.
#include <stdio.h>
#include <stdlib.h>

int main(){


    float *vet;
    int n;
    printf("Specifica taglia array: ");
    scanf("%d",&n);
    vet=(float*)malloc(sizeof(float)*n);
/*
Scrivere una funzione che,
dato un intero passato come argomento,
allochi e restituisca una stringa di caratteri della dimensione specificata.
*/
#include <stdio.h>
#include <stdlib.h>

char* stringa(int n){
    char *punt;
    punt=(char*)malloc(sizeof(char)*n);
    printf("Inserisci una stringa lunga %d caratteri: ",n);
    scanf("%s",punt);
    return punt;
}

int main(){
    int d=10;
    char *str=stringa(d);
    printf("\n%s",str);

        return 0;

}

    return 0;
}
