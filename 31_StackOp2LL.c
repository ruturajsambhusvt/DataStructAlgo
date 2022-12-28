#include <stdio.h>
#include <stdlib.h>

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

int isEmpty(struct Node* top){
    if (top == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}


struct Node* push(struct Node* top, int x){
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        new->data = x;// insert the data
        new->next = top;// link the new node with the previous node
        top = new;// make the new node as the top node
        return top;
    }
    
    

}


int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* temp = *top;
        *top =  (*top)->next;
        int x = temp->data;
        free(temp);
        return x;
    }
}

int peek(struct Node** top, int pos){
    struct Node* ptr = *top;
    for (int i = 0; (i < pos-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
    
    
}

int main(){
    struct Node* top = NULL;
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 45);
    linkedListTraversal(top);
    int element = pop(&top);
    // need to pass top by reference since it needs to change in main, so pass the address of top
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    // printf("The value at position 2 is : %d\n", peek(&top, 2));

    for (int i = 1; i < 4; i++)
    {
        printf("The value at position %d is : %d\n", i, peek(&top, i));
    }
    
    

    
    return 0;
}