#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr, int val){
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        // printf("The value %d is popper from the stack", val);
        return val;
        }
}


int main(){
    struct stack* sp;
    sp = (struct stack*)malloc(sizeof(struct stack)); // allocate memory for the stack in the heap
    sp->size = 10;
    sp->top = -1; // top is -1 when the stack is empty
    sp->arr = (int*)malloc(sp->size*sizeof(int)); // allocate memory for the array in the heap
    printf("Stack has been created successfully\n");

    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    push(sp, 10);
    push(sp, 56);
    push(sp, 34);
    push(sp, 32);
    push(sp, 56);
    push(sp, 16);
    push(sp, 77);
    push(sp, 64);
    push(sp, 10);
    push(sp, 12);
    push(sp, 15);// Stack Overflow! Cannot push 15 to the stack
    // push(sp, 10)

    printf("After pushing, Empty: %d\n", isEmpty(sp));
    printf("After pushing, Full: %d\n", isFull(sp));

    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));



    return 0;
}