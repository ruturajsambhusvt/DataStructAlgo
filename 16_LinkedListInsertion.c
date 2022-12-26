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

//Case 1: Insertion at the beginning of the linked list
struct Node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
//Case 2: Insertion at a given index
struct Node* insertAtIndex(struct Node* head,int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
    

}
//Case 3: Insertion at the end of the linked list
struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    while (p->next!=NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    return head;
    

}

//Case 4: Insertion after a given node
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
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
    printf("Linked list initial \n");
    linkedListTraversal(head);
    head = insertAtFirst(head,56);
    printf("Inserted at first \n");
    linkedListTraversal(head);
    head = insertAtIndex(head, 45, 3);
    printf("Inserted inside \n");
    linkedListTraversal(head);
    head = insertAtEnd(head, 100);
    printf("Inserted at end \n");
    linkedListTraversal(head);
    head = insertAfterNode(head, second,34);
    printf("Inserted after node \n");
    linkedListTraversal(head);

    return 0;
}