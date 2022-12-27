#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
// double linked list traversal head to tail and tail to head back
void doubleLinkedListTraversal(struct Node* head){
    struct Node* ptr = head;
    struct Node* p;
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        p = ptr;
        ptr = ptr->next;
        
    }
    while (p != NULL)
    {
        printf("Element is %d\n", p->data);
        ptr = p;
        p = p->prev;
        
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
    head->prev = NULL;
    head->next = second;

    //link second and third nodes
    second->data = 11;
    second->prev = head;
    second->next= third;

    //terminate the list at the third node
    third->data = 66;
    third->prev = second;
    third->next = fourth;

    //link third and fourth nodes
    fourth->data = 99;
    fourth->prev = third;
    fourth->next = NULL;

    doubleLinkedListTraversal(head);
    
    return 0;
}