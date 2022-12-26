#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    // if (element>size)
    // {
    //     printf("Element does not exist, the array is smaller!\n");
    // }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;
    
}

int binarySearch(int arr[], int size, int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    //start searching and keep searching until low and high converges
    while (low<=high)
    {
        /* code */
    
    
        mid = (low+high)/2;//greatest integer automatically
        if(arr[mid]==element){
            return mid;
        }
        else if (arr[mid]<element)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
    

}

int main(){

    // int arr[] = {1,2,3,4,5,76,54,7,8,44,35,67,23,67,89};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 10;
    // int searchIndex = linearSearch(arr,size,element);
    // printf("The element %d was found at index %d\n",element,searchIndex);

    int arr2[] = {1,2,32,47,59,62,74,85,98,106,123,134,145,156,167,178,189,200};
    int size = sizeof(arr2)/sizeof(int);
    int element = 98;
    int searchIndex = binarySearch(arr2,size,element);
    printf("The element %d was found at index %d\n",element,searchIndex);

    
    return 0;
}