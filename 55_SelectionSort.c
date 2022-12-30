#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{
    int indexOfMin = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        // printf("Working on pass number %d\n", i + 1);
        indexOfMin = i; // assume the first element to be the minimum

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main()
{
    srand(time(NULL));
    // int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    // int n = sizeof(A) / sizeof(A[0]);

    int size = 100;
    int A[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%size;
    }

    int n = sizeof(A)/sizeof(A[0]);

    printArray(A, n);
    selectionSort(A, n);
    printf("Sorted array is: \n");
    printArray(A, n);
    return 0;

    return 0;
}