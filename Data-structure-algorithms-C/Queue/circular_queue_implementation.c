#include <stdio.h>
#include <stdlib.h>

// operations 1. enqueue 2. dequeue

typedef struct queue
{
    int maxCapacity;
    int front;
    int rear;
    int *items;
} CircularQueue;

// initialize a circular queue
CircularQueue *newCircularQueue(int capacity)
{
    CircularQueue *ptr = (CircularQueue *)malloc(sizeof(CircularQueue));

    ptr->front = -1;
    ptr->rear = -1;
    ptr->maxCapacity = capacity;
    ptr->items = (int *)malloc(sizeof(int) * capacity);

    return ptr;
}

void enqueue(CircularQueue *ptr, int val)
{
    // check for queue is empty
    if (ptr->front == -1 && ptr->rear == -1) // queue is empty condition
    {
        ptr->front = 0;
        ptr->rear = 0;

        ptr->items[ptr->rear] = val;
    }
    else if ((ptr->rear + 1) % ptr->maxCapacity == ptr->front) // queue is full condition check
    {
        printf("Queue is full..");
    }
    else
    {
        ptr->rear = (ptr->rear + 1) % ptr->maxCapacity;
        ptr->items[ptr->rear] = val;
    }
}

// function to delete element from queue

void dequeue(CircularQueue *ptr)
{

    if (ptr->front == -1 && ptr->rear == -1)
    {
        printf("Queue underflow");
    }
    else if (ptr->front == ptr->rear)
    {
        printf("The dequeued element is - %d \n", ptr->items[ptr->front]);
        ptr->front = -1;
        ptr->rear = -1;
    }
    else
    {
        printf("The dequeued element is - %d \n", ptr->items[ptr->front]);
        ptr->front = (ptr->front + 1) % ptr->maxCapacity;
    }
}

// function to display queue

void display(CircularQueue *ptr)
{

    int itr = ptr->front;
    if (ptr->front == -1 && ptr->rear == -1)
        printf("Queue is empty");
    else
    {
        printf("The elements of queue are - \n");
        while (itr <= ptr->rear)
        {
            printf("Iter - %d , rear - %d , front - %d \n",itr,ptr->rear,ptr->front);
            printf("%d \n", ptr->items[itr]);
            itr = (itr + 1) % ptr->maxCapacity;
        }
        printf("\n");
    }
}

int main()
{

    // let's pushing elements to stack
    int capacity;
    printf("Enter stack capacity - ");
    scanf("%d", &capacity);

    CircularQueue *ptr = newCircularQueue(capacity);

    int op;
    printf("Enter operations - \n 1. enqueue \n 2. dequeue \n 3. display \n 4. break \n");
    while (op != 4)
    {
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            int val;
            printf("Enter value - ");
            scanf("%d", &val);
            enqueue(ptr, val);
            break;
        case 2:
            dequeue(ptr);
            break;
        case 3:
            display(ptr);
            break;
        default:
            break;
        }
    }
    return 0;
}