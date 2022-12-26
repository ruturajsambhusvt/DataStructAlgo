#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr)
{
    while (ptr !=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
    
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // Allocate memory for 3 nodes in the linked list in the Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data = 7;
    head->next = second;

    //link second and third nodes
    second->data = 11;
    second->next= third;

    //terminate the list at the third node
    third->data = 66;
    third->next = fourth;

    //link third and fourth nodes
    fourth->data = 99;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}