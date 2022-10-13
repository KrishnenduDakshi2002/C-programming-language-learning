#include <stdio.h>
#include <string.h>
#include <stdlib.h>



// Data structure to represent a queue
typedef struct queue
{
    int maxSize; // maximum capacity
    int front;     // top elements
    int end;
    int *items;  // array of items
} LinearQueue;

// Utility function to initialize the linear queue
LinearQueue * newQueue(int Capacity)
{
    LinearQueue * ptr = (LinearQueue *)malloc(sizeof(LinearQueue));

    ptr->maxSize = Capacity;
    ptr->front = 0;
    ptr->end = -1;
    ptr->items = (int *)malloc(sizeof(int) * Capacity);

    return ptr;
}

// utility fucntion to return the size of the linear queue
int size(LinearQueue *ptr)
{
    return ptr->front + 1;
}

// utility function to check whether a linear queue is empty or not
int isEmpty(LinearQueue *ptr)
{
    return ptr->front == ptr->end;
}

// utility function to check whether a linear queue is full or not
int isFull(LinearQueue *ptr)
{
    return (ptr->end - ptr->front)== ptr->maxSize - 1;
}

// stack operations PUSH
void push(LinearQueue *ptr, int val)
{
    // check whether our stack is full or not
    if (isFull(ptr))
    {
        printf("Stack is full");
        return;
    }

    ptr->items[++ptr->end] = val;
    printf("Value - %d is added to linear queue", val);
}

// Pop operation
int pop(LinearQueue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue is empty, pop cann't be performed");
        return -1;
    }

    // poping an element from the stack
    return ptr->items[ptr->front++];
}
// getting the top element
int front(LinearQueue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Linear queue is empty");
        return -1;
    }

    return ptr->items[ptr->front];
}

int end(LinearQueue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Linear queue is empty");
        return -1;
    }

    return ptr->items[ptr->end];
}
int main()
{
        // let's pushing elements to stack
    int capacity;
    printf("Enter stack capacity - ");
    scanf("%d", &capacity);

    LinearQueue *ptr = newQueue(capacity);

    char op[10];
    printf("Enter operations - \n 1. push \n 2. pop \n 3. front \n 4. front \n 5. isempty \n 6. isfull\n 7. break \n");

    while (1)
    {

        gets(op);

        if (strcmp(op, "push") == 0)
        {
            int val;
            printf("Enter value - ");
            scanf("%d", &val);
            push(ptr, val);
            printf("\n");
        }
        else if (strcmp(op, "pop") == 0)
        {
            printf("%d is poped",pop(ptr));
            printf("\n");
        }
        else if (strcmp(op, "front") == 0)
        {
            printf("%d is top element",front(ptr));
            printf("\n");
        }
        else if (strcmp(op, "end") == 0)
        {
            printf("%d is top element",end(ptr));
            printf("\n");
        }
        else if (strcmp(op, "isempty") == 0)
        {
            if(isEmpty(ptr)) printf("Stack is empty");
            else printf("Elements are present");
            printf("\n");
        }
        else if (strcmp(op, "isfull") == 0)
        {
            
            if(isFull(ptr)) printf("Stack is full");
            else printf("Empty space available");
            printf("\n");
        }
        else if (strcmp(op, "break") == 0)
        {
            break;
        }
    }
    
    return 0;
}