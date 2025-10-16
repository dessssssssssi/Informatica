/*Dato il seguente prototipo:
void raddoppiaElementiArray(int *array, int dimensione);
Raddoppiare gli elementi dell'array utilizzando i puntatori.*/

#include <stdio.h>


//PROTOTIPO
void raddoppiaElementiArray(int *array, int dimensione);

int main(){
    int vet[]={1,2,3,4};

    //INVOCO LA PROCEDURA RADDOPPIA ELEMENTI ARRAY
    //raddoppiaElementiArray(&vet[0],4);
    raddoppiaElementiArray(vet,4);

    //stampo tutti i valori dell'array
    for(int i=0;i<4;i++)
        printf("%d\n",vet[i]);

    return 0;
}

//IMPLEMENTAZIONE
void raddoppiaElementiArray(int *array, int dimensione){
    for(int i=0;i<dimensione;i++){
        //ALTERNATIVA 1
        //*array=(*array)*2
        //array++;
        //ALTERNATIVA 2
        //*(array+i)=(*(array))*2;
        //ALTERNATIVA 3
        array[i]=array[i]*2;
    }
}
