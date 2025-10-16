//Crea una funzione che data in input una stringa, restituisce la lunghezza della stringa!
//prototipo funzione: 
//int calcolaLunghezzaStringa(const char *stringa);

#include <stdio.h>

    int calcolaLunghezzaStringa(const char *stringa){
        int i=0;

        while(*stringa!='\0'){
            i++;
            stringa++;
        }
        return i;
    }
 int main(){
    printf("la srtinga ha una lunghezza pari a %d", calcolaLunghezzaStringa("ciao"));



    return 0;
 }