#include "Sorts.h"

void swap(int *xp, int *yp){ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int * CreateFullVet(int tam, int op){
    int *vet;
    int i;

    if( ( vet = malloc( tam * sizeof(int) ) ) == NULL) 
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

void InsertionSort(int *v, int tam){
    int i,j;
    for(i = 1; i < tam; i++){
        for(j = 0; j < i; j++){
            if( v[i] < v[j] ){
                swap(&v[i], &v[j]);
            }
        }
    }
return;
}

void SelectionSort(int *v, int tam){
    int i,j,*min;
    for(j = 0; j < tam; j++){
        min = &v[j];
        for(i = j+1; i < tam; i++){
            if(v[i] < *min)
                min = &v[i];
        }
    swap(min, &v[j]);
    }
return;
}

void BubbleSort(int *v, int tam){    
    int i,j;
    for(j = 0; j < tam-1; j++){
        for(i = 0; i < tam-j-1; i++){
            if( v[i] > v[i+1]){
                swap(&v[i], &v[i+1]);
            }
        }
    }
return;
}