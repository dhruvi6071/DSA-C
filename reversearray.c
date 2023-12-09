#include<stdio.h>
#include<stdlib.h>

int main() {
    int array[] = {1, 2, 3, 5, 7, 9};
     int size = sizeof(array) / sizeof(array[0]);
     int n = size/2;

     for(int i =0; i<n; i++){      
        int temp = array[i];
        array[i] = array[size - 1-i];
        array[size-1-i] = temp;

    }

    for(int i = 0; i<size; i++) {
        printf("%d \n", array[i] );
    }
    return 0;
}