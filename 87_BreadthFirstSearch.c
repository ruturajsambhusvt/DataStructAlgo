

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void display(struct queue *q)
{
    // Traversal of array
    printf("The elements in the DEqueue are:\n");
    for (int i = q->front + 1; i <= q->rear; i++)
    {
        printf("%d\n", q->arr[i]);
    }
}

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("The queue is full\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 400;
    q->front = q->rear = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // BFS Implementation
    int node;
    int i = 4;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int adj[7][7] = { {0, 1, 1, 1, 0, 0, 0},
                      {1, 0, 1, 0, 0, 0, 0},
                      {1, 1, 0, 1, 1, 0, 0},
                      {1, 0, 1, 0, 1, 0, 0},
                      {0, 0, 1, 1, 0, 1, 1},
                      {0, 0, 0, 0, 1, 0, 0},
                      {0, 0, 0, 0, 1, 0, 0} };
    
    printf("The starting node is %d\n",i);
    printf("The nodes visited are:\n");
    printf("%d",i);
    visited[i] = 1;
    enqueue(q,i); // Enqueue the starting node for exploration

    while (!isEmpty(q))
    {
        int node = dequeue(q);
        for (int j = 0; j < 7; j++)
        {
            if (adj[node][j] == 1 && visited[j] == 0)
            {
                printf("%d",j);
                visited[j] = 1;
                enqueue(q,j); // Enqueue the node for exploration
            }
            
        }
        
    }
    printf("\n");
    


    return 0;
}