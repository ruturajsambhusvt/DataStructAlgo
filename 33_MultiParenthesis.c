#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        // printf("The value %d is popper from the stack", val);
        return val;
    }
}

char stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

char stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int parenthesisMatch(char *exp)
{
    int len = strlen(exp);
    // create and initialize the stack
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack)); // allocate memory for the stack in the heap
    sp->size = len;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            else
            {
                pop(sp);
            }
        }
    }

    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int match(char a, char b)
{
    if ((a == '{' && b == '}') || (a == '[' && b == ']') || (a == '(' && b == ')'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int multiParenthesisMatch(char *exp)
{
    int len = strlen(exp);
    // create and initialize the stack
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack)); // allocate memory for the stack in the heap
    sp->size = len;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            else
            {
                popped_ch = pop(sp);
                if (!match(exp[i], popped_ch))
                {
                    return 0;
                }
            }
        }
    }

    if (isEmpty(sp))
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

    char *exp = "{(8*[(3+5-6)])}";
    // check if stack is empty
    if (parenthesisMatch(exp))
    {
        printf("The parenthesis is balanced\n");
    }
    else
    {
        printf("The parenthesis is not balanced\n");
    }

    return 0;
}