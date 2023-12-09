#include<stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

int main() {
    int array[] = {12, 15, 3, 2, 1, 5, 6};
    int size = sizeof(array)/sizeof(array[0]);
    
    sort(array, size);
       
    printf("minimum number is : %d \n", array[0]);
    printf("maximum number is : %d \n", array[size-1]);
    return 0;
   
}