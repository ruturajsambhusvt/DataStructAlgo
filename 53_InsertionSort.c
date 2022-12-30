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

void insertionSort(int* A, int n){
    int key;
    int j;
    //loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        printf("Working on pass number %d\n",i);
        key = A[i];
        j = i-1;
        //loop for comparisons in each pass
        while (A[j]>key && j>=0)
        {
            A[j+1] = A[j]; //making space for the element to be inserted at right spot
            j--;
        }
        A[j+1] = key;
        
        
    }
    
}

int main(){
    srand(time(NULL));
    // int A[] = {11,13,7,12,16,9,24,5,10,3};
    // int n = sizeof(A)/sizeof(A[0]);

    int size = 100;
    int A[size];
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%size;
    }
    
    int n = sizeof(A)/sizeof(A[0]);

    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}