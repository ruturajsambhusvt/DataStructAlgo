#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    // struct stack s;
    // s.size= 80;
    // s.top =-1;
    // s.arr = (int*)malloc(s.size*sizeof(int));
    // printf("Welcome to Stack using Array\n");
    struct stack* s;
    s = (struct stack*) malloc(sizeof(struct stack));// allocate memory for the stack in the heap
    s->size = 80;
    s->top = -1;
    s->arr = (int*) malloc(s->size*sizeof(int));
    
    //pushing elements to the stack
    s->arr[0] = 7;
    s->top++;
    s->arr[1] = 8;
    s->top++;
    // Check if stack is empty
    if (isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }

    return 0;
}