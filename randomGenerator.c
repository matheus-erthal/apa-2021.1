#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define ARR_SIZE 10000

int valueInArray(int val, int arr[], int size){
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == val)
            return 1;
    }
    return 0;
}

int main(){

    int arr[ARR_SIZE], i, size = 0;

    srand(time(NULL));

    for(i = 0; i < ARR_SIZE; i++){
        int currentValueInArray = 1;
        do{
            int r = rand() % 1000000;

            currentValueInArray = valueInArray(r, arr, size);

            if(!currentValueInArray){
                arr[size] = r;
                size++;
            }
        }while(currentValueInArray);
    }

    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}