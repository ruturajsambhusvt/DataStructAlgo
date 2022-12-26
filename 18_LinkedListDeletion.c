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
//Case 1 : Deletion of the first node
struct Node * deleteFirst(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr); //free the memory
    return head;
}


//Case 2 : Deletion of the node at a given index
struct Node * deleteAtIndex(struct Node* head, int index){
    
    struct Node* p = head;
    struct Node* q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next; //pointing to the next node
    free(q); //free the memory
    
    return head;
}

// Case 3: Deletion of the last node
struct Node * deleteAtLast(struct Node* head){
    
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }

    p->next = NULL; //terminating the list
    free(q); //free the memory

    return head;
}


// Case 4: Deletion of the node with a given value
struct Node * deleteAtValue(struct Node* head, int value){
    
    struct Node* p = head;
    struct Node* q = head->next;

    if (p->data == value)
    {
        head = q; //pointing to the next node
        free(p); //free the memory
        return head;
    }
    
    else{
        while (q->data != value && q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }

        if (q->data == value)
        {
            p->next = q->next; //pointing to the next node
            free(q); //free the memory
        }
        else{
            printf("Value not found \n");
        }
        
        return head;
    }

}


int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;

    // Allocate memory for 3 nodes in the linked list in the Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node)); 
    fifth = (struct Node*)malloc(sizeof(struct Node));

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
    fourth->next = fifth;

    //link fourth and fifth nodes
    fifth->data = 100;
    fifth->next = NULL;
    
    printf("Linked list initial \n");
    linkedListTraversal(head);

    head = deleteAtValue(head, 100);
    printf("Deleted at value \n");
    linkedListTraversal(head);


    head = deleteFirst(head);
    printf("Inserted at first \n");
    linkedListTraversal(head);

    head = deleteAtIndex(head, 1);
    printf("Deleted at index \n");
    linkedListTraversal(head);
    head = deleteAtLast(head);
    printf("Deleted at last \n");
    linkedListTraversal(head);


    return 0;
}