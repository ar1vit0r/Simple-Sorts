#include "Sorts.h"

int main(){
    int *vet;
    int max;

    max = 10;
    if( (vet = CreateFullVet(max,1)) == NULL)
        return 0;

    printf("Desordenado: \n");
    for(int i = 0; i < max; i++){
        printf(" pos: %d val: %d",i+1,vet[i]);
    }

    InsertionSort(vet,max);
    printf("\n");
    printf("Ordenado: \n");
    for(int i = 0; i < max; i++){
        printf(" pos: %d val: %d",i+1,vet[i]);
    }
return 1;
}