#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to swap two elements in an array
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse a portion of the array
void reverse(char arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// Function to find the next lexicographically greater permutation of a string
int next_permutation(char arr[]) {
    int n = strlen(arr);

    // Find the rightmost character which is smaller than its next character
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // If no such character is found, the permutation is the last permutation
    if (i < 0) {
        return 0;
    }

    // Find the smallest character to the right of arr[i] and greater than arr[i]
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    // Swap arr[i] and arr[j]
    swap(&arr[i], &arr[j]);

    // Reverse the substring to the right of arr[i]
    reverse(arr, i + 1, n - 1);

    return 1;
}

// Function to print an array
void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[] = "abc";

    printf("Original Permutation: %s\n", arr);

    // Generate and print all permutations
    do {
        printArray(arr, strlen(arr));
    } while (next_permutation(arr));

    return 0;
}
