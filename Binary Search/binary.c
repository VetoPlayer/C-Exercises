
//Searching though a sorted array of integers.
//Binary search

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#define ARRAY_DIM 6

int binary_search(int x, int array[],int dim){
    for (int i = 0; i < ARRAY_DIM; i++){
        printf("%d",array[i]);
    }
        return 0;
}

int main(){
    int array[ARRAY_DIM] = {1,2,3,4,5,6};
    int x;
    scanf("%d", &x);
    printf("Hello World!!! %d \n", x);
    binary_search(x, array, ARRAY_DIM);
    return 0;
}
