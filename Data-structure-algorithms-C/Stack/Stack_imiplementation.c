#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Data structure to represent a stack
typedef struct stack
{
    int maxSize; // maximum capacity
    int top;     // top elements
    int *items;  // array of items
} Stack;

// Utility function to initialize the stack
Stack * newStack(int Capacity)
{
    Stack * ptr = (Stack *)malloc(sizeof(Stack));

    ptr->maxSize = Capacity;
    ptr->top = -1;
    ptr->items = (int *)malloc(sizeof(int) * Capacity);

    return ptr;
}

// utility fucntion to return the size of the stack
int size(Stack *ptr)
{
    return ptr->top + 1;
}

// utility function to check whether a stack is empty or not
int isEmpty(Stack *ptr)
{
    return ptr->top == -1;
}

// utility function to check whether a stack is full or not
int isFull(Stack *ptr)
{
    return ptr->top == ptr->maxSize - 1;
}

// stack operations PUSH
void push(Stack *ptr, int val)
{
    // check whether our stack is full or not
    if (isFull(ptr))
    {
        printf("Stack is full");
        return;
    }

    ptr->items[++ptr->top] = val;
    printf("Value - %d is added to stack", val);
}

// Pop operation
int pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty, pop cann't be performed");
        return -1;
    }

    // poping an element from the stack
    return ptr->items[ptr->top--];
}

// getting the top element
int peek(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty");
        return -1;
    }

    return ptr->items[ptr->top];
}

int main()
{
    // let's pushing elements to stack
    int capacity;
    printf("Enter stack capacity - ");
    scanf("%d", &capacity);

    Stack *ptr = newStack(capacity);

    char op[10];
    printf("Enter operations - \n 1. push \n 2. pop \n 3. peek \n 4. isempty \n 5. isfull\n 6. break \n");

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
        else if (strcmp(op, "peek") == 0)
        {
            printf("%d is top element",peek(ptr));
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