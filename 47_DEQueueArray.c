#include <stdio.h>
#include <stdlib.h>

struct DEqueue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void display(struct DEqueue* q)
{
    // Traversal of array
    printf("The elements in the DEqueue are:\n");
    for (int i = q->front+1; i <= q->rear; i++)
    {
        printf("%d\n", q->arr[i]);
    }
}


int isFull(struct DEqueue *q)
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

int isEmpty(struct DEqueue *q)
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

void enqueueR(struct DEqueue *q, int val)
{
    if (isFull(q))
    {
        printf("The DEqueue is full\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
        printf("Rear Inserting element %d in the DEqueue\n",val);
    }
}

void enqueueF(struct DEqueue* q, int val){
    if (q->front == -1)
    {
        printf("Cannot Front Insert in a DEqueue\n");
    }
    else
    {
        q->arr[q->front] = val;
        q->front--;
        printf("Front Inserting element %d in the DEqueue\n",val);
    }
    
}

int dequeueF(struct DEqueue *q){
    int a=-1;
    if (isEmpty(q))
    {
        printf("The DEqueue is empty\n");
    }
    else
    {
        q->front++;
        a = q->arr[q->front];
        printf("Front Dequeueing element %d from DEqueue\n",a);
    }
    return a;
    
    
}

int dequeueR(struct DEqueue *q){
    int a=-1;
    if (isEmpty(q))
    {
        printf("The DEqueue is empty\n");
    }
    else 
    {
        a = q->arr[q->rear];
        q->rear--;
        printf("Rear Dequeueing element %d from DEqueue\n",a);
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
    struct DEqueue* q = (struct DEqueue*)malloc(sizeof(struct DEqueue));
    q->size = 6;
    q->front = q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    if (isEmpty(q))
    {
        printf("The DEqueue is empty\n");
    }
    

    // Enqueue some values in the queue
    enqueueR(q, 34);
    enqueueR(q, 45);
    enqueueR(q, 56);
    enqueueR(q, 67);

    display(q);

    if (isEmpty(q))
    {
        printf("The DEqueue is empty\n");
    }

    if (isFull(q))
    {
        printf("The DEqueue is full\n");
    }

    

    dequeueF(q);
    dequeueF(q);

    display(q);

    enqueueF(q, 3);
    enqueueF(q, 4);

    display(q);

    enqueueF(q, 5);
    enqueueF(q, 6);

    display(q);

    enqueueR(q, 34);
    enqueueR(q, 45);

    display(q);

    dequeueF(q);
    dequeueF(q);

    display(q);

    dequeueR(q);
    dequeueR(q);

    display(q);

    enqueueR(q, 78);//although there is space in the queue, we cannot enqueue because the front and rear are at the same position and at size -1
    
    display(q);

    if (isEmpty(q))
    {
        printf("The DEqueue is empty\n");
    }

    if (isFull(q))
    {
        printf("The DEqueue is full\n");
    }

    return 0;
}