#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->rear + 1)% q->size == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//same as linear queue
int isEmpty(struct circularQueue *q)
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

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("The circularQueue is full\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;//circular increment
        q->arr[q->rear] = val;
        printf("enqueueing element %d in the circularQueue\n",val);
    }
}

int dequeue(struct circularQueue *q){
    int a=-1;
    if (isEmpty(q))
    {
        printf("The circularQueue is empty\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;//cirular increment
        a = q->arr[q->front];
    }
    return a;
    
    
}

int main()
{
    // struct circularQueue q;
    // q.size = 100;
    // q.front = q.rear = -1;
    // q.arr = (int*)malloc(q.size*sizeof(int));

    // // EncircularQueue some values in the circularQueue
    // encircularQueue(&q,34);
    // encircularQueue(&q,45);
    struct circularQueue* q = (struct circularQueue*)malloc(sizeof(struct circularQueue));
    q->size = 4;
    // important to initialize front and rear to 0 as opposed to -1 because we are using circular increment
    q->front = q->rear = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    if (isEmpty(q))
    {
        printf("The circularQueue is empty\n");
    }
    

    // EncircularQueue some values in the circularQueue
    enqueue(q, 34);
    enqueue(q, 45);
    enqueue(q, 56);

    if (isEmpty(q))
    {
        printf("The circularQueue is empty\n");
    }

    if (isFull(q))
    {
        printf("The circularQueue is full\n");
    }

    printf("dequeueing element %d from circularQueue\n",dequeue(q));
    printf("dequeueing element %d from circularQueue\n",dequeue(q));
    printf("dequeueing element %d from circularQueue\n",dequeue(q));

    enqueue(q, 6);
    enqueue(q, 6);
    enqueue(q, 6);
    
    if (isEmpty(q))
    {
        printf("The circularQueue is empty\n");
    }

    if (isFull(q))
    {
        printf("The circularQueue is full\n");
    }

    return 0;
}