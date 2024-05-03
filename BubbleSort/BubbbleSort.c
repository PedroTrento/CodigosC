#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){

    int arr[TAM], val_ant;

    srand(time(NULL));

    // generate random array
    for(int i = 0; i < TAM; i++){
        arr[i] = rand()%TAM;
    }

    //print array
    printf("Array:");
    for(int i = 0; i < TAM; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble Sort
    for(int i = 0; i < TAM; i++){
        val_ant = arr[0];
        for(int j = 0; j < TAM; j++){
            if(val_ant > arr[j]){
                arr[j-1] = arr[j];
                arr[j] = val_ant;   
            }
            val_ant = arr[j];
        }
        printf("Sorting array:");
        for(int k = 0; k < TAM; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("Sorted array:");
    for(int i = 0; i < TAM; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
