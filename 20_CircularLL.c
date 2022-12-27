#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* head)
{
    struct Node* ptr = head;
    // printf("Element is %d\n", ptr->data);
    // ptr = ptr->next;
    // while (ptr!=head)
    // {
    //     printf("Element is %d\n", ptr->data);
    //     ptr = ptr->next;
    // }
    // better use do while loop
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr!=head);
    

    

    
}

struct Node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node* p = head->next;
    //move until the last node
    while (p->next!=head)
    {
        p=p->next;
    }
    // at this point p points to the last node

    p->next = ptr;// link the last node with the new node
    ptr->next = head;// link the new node with the first node
    head = ptr;// make the new node as the first node
    return head;
    

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
    head->data = 4;
    head->next = second;

    //link second and third nodes
    second->data = 3;
    second->next= third;

    //terminate the list at the third node
    third->data = 6;
    third->next = fourth;

    //link third and fourth nodes
    fourth->data = 1;
    fourth->next = head;

    printf("Circular Linked List before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 56);
    printf("Circular Linked List after insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 99);
    printf("Circular Linked List after insertion\n");
    linkedListTraversal(head);


    return 0;
}