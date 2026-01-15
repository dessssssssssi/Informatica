#include <stdio.h>

void printArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
void selectionSort( int v[], int n){
    int i, j, pos_min;
    for( i=0 ; i<n-1 ; i++ ){
        pos_min = i;
        for( j = i+1 ; j<n ; j++ )
        if( vet[j] < vet[pos_min] )
        pos_min = j;
        }
    }
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    printf("Array originale: ");
    printArray(arr, n);

    printf("Minimo: %d\n", minimo(arr, n));
    printf("Massimo: %d\n", massimo(arr, n));

    selectionSort(arr, n);
    printf("Array ordinato: ");
    printArray(arr, n);

    int x = 10, y = 20;
    scambia(&x, &y);
    printf("Dopo scambio: x=%d y=%d\n", x, y);

    return 0;
}
