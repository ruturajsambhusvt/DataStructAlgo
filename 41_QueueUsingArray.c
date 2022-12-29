#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void display(struct queue* q)
{
    // Traversal of array
    printf("The elements in the DEqueue are:\n");
    for (int i = q->front+1; i <= q->rear; i++)
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

int dequeue(struct queue *q){
    int a=-1;
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
    // struct queue q;
    // q.size = 100;
    // q.front = q.rear = -1;
    // q.arr = (int*)malloc(q.size*sizeof(int));

    // // Enqueue some values in the queue
    // enqueue(&q,34);
    // enqueue(&q,45);
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 4;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }
    

    // Enqueue some values in the queue
    enqueue(q, 34);
    enqueue(q, 45);
    enqueue(q, 56);
    enqueue(q, 67);

    display(q);

    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }

    if (isFull(q))
    {
        printf("The queue is full\n");
    }

    printf("Dequeueing element %d from queue\n",dequeue(q));
    printf("Dequeueing element %d from queue\n",dequeue(q));
    printf("Dequeueing element %d from queue\n",dequeue(q));
    printf("Dequeueing element %d from queue\n",dequeue(q));

    display(q);

    enqueue(q, 78);//although there is space in the queue, we cannot enqueue because the front and rear are at the same position and at size 
    
    display(q);

    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }

    if (isFull(q))
    {
        printf("The queue is full\n");
    }

    return 0;
}