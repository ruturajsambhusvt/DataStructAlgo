#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;

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

void enqueue(struct Node** front, struct Node** rear, int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));

    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data = val;
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
        
        
    } 
    
}

int dequeue(struct Node** front){
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
    }
    return val;
    

}

int main(){

    struct Node* front = NULL;
    struct Node* rear = NULL;
    linkedListTraversal(front);
    printf("Dequeueing element %d from the queue\n",dequeue(&front));
    enqueue(&front, &rear, 34);
    enqueue(&front, &rear, 45);
    enqueue(&front, &rear, 56);
    enqueue(&front, &rear, 67);
    linkedListTraversal(front);
    printf("Dequeueing element %d from the queue\n",dequeue(&front));
    printf("Dequeueing element %d from the queue\n",dequeue(&front));
    linkedListTraversal(front);
    
    return 0;
}