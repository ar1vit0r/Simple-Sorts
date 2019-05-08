#include "Sorts.h"

int main(void){
    int *vet;
    int max;

    max = 10;
    if( (vet = CreateFullVet(max,0)) == NULL)
        return 1;

    printf("Desordenado: \n");
    for(int i = 0; i < max; i++){
        printf(" pos: %d val: %d \n",i+1,vet[i]);
    }

    BubbleSort(vet,max);
    printf("\n");
    printf("Ordenado: \n");
    for(int i = 0; i < max; i++){
        printf(" pos: %d val: %d \n",i+1,vet[i]);
    }
return 0;
}