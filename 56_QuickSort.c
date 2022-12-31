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

int partition(int *A, int low, int high)
{
    int pivot = A[low]; // first element as pivot
    int i = low + 1;    // index for forward search
    int j = high;       // index for backward search
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        printf("i = %d, j = %d\n", i, j);
    } while (i < j);
    // swap A[low] with A[j]
    printf("Exit out of do while loop\n");
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    printf("returning\n");
    return j; // return the position of the pivot
}

void quickSort(int *A, int low, int high)
{
    int partitionIndex; // index of the pivot after the partition

    if(low < high)
    {

        partitionIndex = partition(A, low, high);
        printf("partitionIndex = %d\n", partitionIndex);
        quickSort(A, low, partitionIndex - 1);  // sort the left subarray
        quickSort(A, partitionIndex + 1, high); // sort the right subarray
    }
}

int main()
{

    srand(time(NULL));
    /* int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    // int A[] = {3,5,2,13,12};
    int n = sizeof(A) / sizeof(A[0]); */

     int size = 100;
     int A[size];
     for (int i = 0; i < size; i++)
     {
         A[i] = rand()%size;
     }

     int n = sizeof(A)/sizeof(A[0]);

    printArray(A, n);
    quickSort(A, 0, n - 1);
    printf("Sorted array is: \n");
    printArray(A, n);
    return 0;
}