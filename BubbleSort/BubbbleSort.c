#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){

    int arr[TAM];

    srand(time(NULL));

    for(int i = 0; i < TAM; i++){
        arr[i] = rand()%TAM;
    }

    printf("Array:");
    for(int i = 0; i < TAM; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}
