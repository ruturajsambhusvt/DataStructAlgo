#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int *A, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    // Find the max element
    int max = maximum(A, n);

    int *count = (int *)malloc((max + 1) * sizeof(int));
    // initialize the count array with 0
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int j = 0; j < n; j++)
    {
        count[A[j]]++;
    }

    int l, m;
    l = m = 0;

    while (l < max + 1)
    {
        if (count[l] > 0)
        {
            A[m] = l;
            count[l]--;
            m++;
        }

        else
        {
            l++;
        }
    }
}

int main()
{
    srand(time(NULL));
    /*  int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
     // int A[] = {3,5,2,13,12,34,23};
     int n = sizeof(A) / sizeof(A[0]); */

    int size = 100;
    int A[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % size;
    }

    int n = sizeof(A) / sizeof(A[0]);

    printArray(A, n);
    countSort(A, n);
    printf("Sorted array is: \n");
    printArray(A, n);
    return 0;
}