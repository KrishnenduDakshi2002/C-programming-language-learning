
#include <stdio.h>
#include <stdlib.h>

//implementing stack using linkedlist

typedef struct Node
{
    int data;
    struct Node * next;
}Node;

int nodesCount=0;

//utility function 
void push(Node **top,int data);
void pop(Node **top);
void peek(Node *top);

int main()
{
    Node * top = NULL;

    push(&top, 10);
    push(&top, 11);
    push(&top, 34);
    push(&top, 50);
    push(&top, 99);

    peek(top);

    pop(&top);
    pop(&top);
    pop(&top);
    
    return 0;
}

void push(Node **top ,int data){
    //allocate new node in heap
    Node * node = (Node * )malloc(sizeof(Node));

    //check if stack(heap) is full. then inserting an element would 
    // lead to stack overflow
    if(!node){
        printf("Heap overflow\n");
        exit(-1);
    }

    //set data to new node
    node->data = data;

    //set the next pointer of the new node to point to the current
    // top node of the list
    node->next = * top;  // address of the node in top pointer,which previously points to a node

    // updating the top pointer
    *top = node;  // now top pointer will store new node

    //increset he stack size
    nodesCount++;


}

void pop(Node ** top){

    // check for Stack underflow
    if(*top == NULL){
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    // the current node pointed by top pointer
    Node * node = * top;

    // update the top pointer to point to the next node
    *top = (*top)->next;

    //decrease the stack size
    nodesCount --;

    //
    printf("Poping -> %d\n",node->data);

    //freeing allocated memory
    free(node);


}

void peek(Node *top){
    printf("Top -> %d\n",top->data);
}