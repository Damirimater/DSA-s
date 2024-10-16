#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void);

void randn(int arr[], int n)
{ 
    for (int i = 0; i < n+1; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}

void arr_print(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]\n");
}

int res(int arr[], int n)
{
    int i = 0;
    while (i < n+1)
    {
        int n_i = i += 1;
        if (arr[i] > arr[n_i])
        {
            arr[i], arr[n_i] = arr[n_i], arr[i];
        }
        i++;
    }
}

int main(void)
{
    int n = 10;
    int arr[n]; 
    randn(arr, n);
    res(arr, n);
    arr_print(arr, n);
}

