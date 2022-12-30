#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}

void bubbleSort(int* A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) //for number of pass , n-1 passes for n elements
    {
        printf("Working on pass number %d\n",i+1);
        for (int j = 0; j < n-1-i; j++)//for number of comparisons in each pass
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            
        }
        
    }
    
}


void bubbleSortAdaptive(int* A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) //for number of pass , n-1 passes for n elements
    {
        printf("Working on pass number %d\n",i+1);
        isSorted = 1;
        for (int j = 0; j < n-1-i; j++)//for number of comparisons in each pass
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
            
        }
        if (isSorted)
        {
            return;
        }
        
    }
    
}

int main(){
    srand(time(NULL));
    // int A[] = {12,54,65,7,23,9};
    // int A[] = {1,3,5,7,8,16,43,78};
    // int A[] = {12,54,65,7,23,9,2,7,2,3,1,5,9,54,34,63,11,23,4,57,4,5,2,67,43,32,57,32,67,35};
    int size = 100;
    int A[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%size;
    }
    
    int n = sizeof(A)/sizeof(A[0]);
    printArray(A,n);
    bubbleSortAdaptive(A,n);
    printArray(A,n);

    
    return 0;
}