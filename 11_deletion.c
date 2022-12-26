#include <stdio.h>

void display(int arr[], int n)
{
    // Traversal of array
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int sortedInsertion(int arr[], int size, int element, int capacity, int index){
    // Insertion of element in the array
    if(size>=capacity){
        printf("Array is full\n");
        return -1;
    }
    else{
    for(int i=size-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    printf("Element inserted successfully\n");
    return 1;
    }
}

int indDeletion(int arr[], int size,int index){
    // Code for deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
    

}

int main()
{
    int arr[100] = {7,8,12,27,88};
    int size = 5;
    int element = 45;
    int index =3;
    display(arr, size);
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
   
    // int ret = sortedInsertion(arr,size,element,10, index);
    // if (ret==1){
    //     size+=1;
    //     display(arr,size);
    // }
    // else{
    //     printf("Element not inserted\n");
    // }
    

    return 0;
}