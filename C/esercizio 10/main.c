/*Dato il seguente prototipo: 
void copiaStringa(const char *sorgente, char *destinazione);
Copia la stringa sorgente nella stringa destinazione utilizzando i puntatori*/

//PROTOTIPI

#include <stdio.h>

void copiaStringa(const char *sorgente, char *destinazione);

int main(){
    char stringa[5];

    copiaStringa("ciao", stringa);

    printf("%s", stringa);


    return 0;
}

//IMPLEMENTAZIONI
void copiaStringa(const char *sorgente, char *destinazione){

    int i,lunghezza=0;



    while(sorgente[lunghezza]!='\0'){
        lunghezza++;
    }//end while

    for(i=0;i<lunghezza;i++){
        destinazione[i]=sorgente[i];
    }



}