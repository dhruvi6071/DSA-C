#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {1, 2, 4, 3, 6, 0, 49, -1, -7};
    int size = sizeof(array) / sizeof(array[0]);
    // int size = 4;
    int j = array[0];
    int k = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[j])
        {
            array[j] = array[i];
        }
    }
    printf("maximum number is : %d \n", array[j]);

    for (int i = 0; i < size; i++)
    {
        if (array[k] > array[i])
        {
            array[k] = array[i];
        }
    }
    printf("minimum number is : %d \n", array[k]);
}