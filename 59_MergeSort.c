#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}



void merge(int* A, int low, int mid, int high){
    int i,j,k;
    int* B = (int*)malloc((high+1)*sizeof(int));
    // int size = sizeof(B) / sizeof(B[0]);
    // printf("size of B = %d\n", size);
    // int* B = (int*)malloc((100)*sizeof(int));
    i = low; 
    j= mid+1;
    k=low;

    while (i<=mid && j<=high)
    {
        if (A[i]<=A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
        
        
    }

    // One of the subarray is exhausted copy the remaining elements of the other subarray


    while (i<=mid)
    {
        B[k]=A[i];
        i++;
        k++;
    }

    while (j<=high)
    {
        B[k]=A[j];
        j++;
        k++;
    }

    // Copy the sorted elements back to the original array
    for (int i = low; i <=high; i++)
    {
        A[i]=B[i];
    }

    // free(B);// free the memory allocated to B

}

void mergeSort(int* A, int low, int high){
    int mid;
    if (low<high)
    {
        mid = (low+high)/2;
        mergeSort(A,low, mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
    }
    

}

int main(){
    srand(time(NULL));
   /*  int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    // int A[] = {3,5,2,13,12,34,23};
    int n = sizeof(A) / sizeof(A[0]); */

     int size = 100;
     int A[size];
     for (int i = 0; i < size; i++)
     {
         A[i] = rand()%size;
     }

     int n = sizeof(A)/sizeof(A[0]);

    printArray(A, n);
    mergeSort(A, 0, n - 1);
    printf("Sorted array is: \n");
    printArray(A, n);
    return 0;
}