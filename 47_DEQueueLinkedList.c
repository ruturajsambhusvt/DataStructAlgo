#include <stdio.h>
#include <stdlib.h>
//Need a doubly linked list or else the dequeue from rear will be O(n)
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;

};
void linkedListTraversal(struct Node* ptr)
{
    printf("Printing the elements of the linked list\n");
    while (ptr !=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
    
}

void enqueueR(struct Node** front, struct Node** rear, int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
    
        n->data = val;
        n->prev = *rear;
        n->next = NULL;
        if (*front == NULL)
        {
            *front = *rear = n;
        }
        else
        {
            (*rear)->next = n;
            *rear = n;
        }
        printf("Rear Enqueueing element %d in the queue\n",val);
        
        
    } 
    
}


void enqueueF(struct Node** front, struct Node** rear, int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = *front;
        n->prev = NULL;
        *front = n;
        printf("Front Enqueueing element %d in the queue\n",val);
    } 
    
}


int dequeueF(struct Node** front){
    int val = -1;
    struct Node* ptr = *front;
    if(ptr == NULL){
        printf("Queue is empty\n");
    }
    else
    {
        *front = (*front)->next;
        val = ptr->data;
        free(ptr);
        printf("Front Dequeueing element %d from the queue\n",val);
    }
    return val;
    
}

int dequeueR(struct Node** rear){
    int val = -1;
    struct Node* ptr = *rear;
    if(ptr == NULL){
        printf("Queue is empty\n");
    }
    else
    {
        *rear = (*rear)->prev; //Move the rear pointer to the previous node
        (*rear)->next = NULL; //NULL the next pointer of the new rear
        val = ptr->data;
        free(ptr);
        printf("Rear Dequeueing element %d from the queue\n",val);
    }
    return val;
    

}

int main(){

    struct Node* front = NULL;
    struct Node* rear = NULL;
    linkedListTraversal(front);
    dequeueF(&front);

    enqueueR(&front, &rear, 34);
    enqueueR(&front, &rear, 45);
    enqueueR(&front, &rear, 56);
    enqueueR(&front, &rear, 67);
    linkedListTraversal(front);
    dequeueF(&front);
    dequeueF(&front);
    linkedListTraversal(front);

    enqueueF(&front, &rear, 12);
    enqueueF(&front, &rear, 23);
    linkedListTraversal(front);

    enqueueR(&front, &rear, 78);
    enqueueR(&front, &rear, 89);
    linkedListTraversal(front);

    dequeueR(&rear);
    dequeueR(&rear);
    dequeueR(&rear);
    dequeueF(&front);
    linkedListTraversal(front);
    
    return 0;
}