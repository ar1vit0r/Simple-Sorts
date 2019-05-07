#include "Sorts.h"

int CreateFullVet(int tam, int op){
    int *vet;
    int i;

    if( ( vet = (int *)malloc( tam * sizeof(int) ) ) == NULL) 
		return NULL;

    if(op == 0){
        for(i = 0; i < tam; i++){
            vet[i] = tam - (i+1);
        }
    return vet;
    }
    else if(op ==1){
        for(i = 0; i < tam; i++){
            vet[i] = (i+1);
        }
    return vet;
    }
return 0;
}

int InsertionSort(int *v, int tam){
    int i,j;

    for(i = 1; i < tam; i++){
        for(j = 0; j < i; j++){
            if( vet[i] < vet[j] ){
                int buffer;
                buffer = vet[j];
                vet[j] = vet[i];
                vet[i] = buffer;
            }
        }
    }
return 1;
}