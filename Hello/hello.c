
//Searching though a sorted array of integers.
//Binary search

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#define ARRAY_DIM 5

int main(){
    int* array;
    array = malloc(sizeof(int)*ARRAY_DIM);
    for(int i = 0; i < ARRAY_DIM; i++){
        array[i] = 9;
        printf("%d",array[i]);
    }
    printf("\n");
    printf("Hello World!!!\n");
    free(array);
    return 0;
}