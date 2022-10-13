#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode * next;
}Node;

Node * head = NULL;
Node * current = NULL;

//display the list
void display(){
    Node *ptr = head;

    printf("\n head");
    //start from beginning
    while(ptr != NULL){
        printf(" -> %d",ptr->data);
        ptr = ptr->next;
    }

}

//insert item at first position

void insertAtFirst(int data){
    //creating a new node pointer
    Node * newNodePointer = (Node *)malloc(sizeof(Node));

    //assigning data
    newNodePointer->data = data;
    newNodePointer->next = head;

    //making this node as first node
    head = newNodePointer;
}
//insert item at end position

void insertAtEnd(int data){
    //creating a new node pointer
    Node * newNodePointer = (Node *)malloc(sizeof(Node));

    //assigning data
    newNodePointer->data = data;
    newNodePointer->next = NULL;

    //traversing the list
    Node * ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = newNodePointer; // previously pointing to NULL
    //now pointing to newnode
}

//delete item at first

void deleteAtFirst(){

    Node * ptr = head;
    // reassigning head to next node
    head = ptr->next;
    printf("\n%d is deleted",ptr->data);
    free(ptr);
}
//delete item at end

void deleteAtEnd(){

    Node * ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    printf("\n%d is deleted",ptr->next->data);
    free(ptr->next); // firstly freeing the allocated last node
    ptr->next = NULL; // then assigning next pointer to NULL
    
}

void sort(){
    Node * ptr1 = head;

    while (ptr1 != NULL)
    {       
        Node * ptr2 = head;
        while(ptr2 != NULL){
            if(ptr1->data <= ptr2->data){
                int temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }

        ptr1 = ptr1->next;
    }
    
}

//reverse a linkedlist
void reverse(){
    Node * prevNode = NULL;
    Node * currentNode = head;
    Node * nextNode = NULL;

    while(currentNode != NULL){

        // first storing next node reference to nextNode pointer for future referencing
        nextNode = currentNode->next;

        //manipulating current node's next pointer to previous node pointer
        currentNode->next = prevNode;

        //asssiging current node pointer to previous pointer for future operation
        prevNode = currentNode;

        // current node to equal to next Node
        currentNode = nextNode;
    }

    // assigning head to current node
    head = prevNode;

}

int main()
{
    insertAtFirst(12);
    insertAtFirst(13);
    insertAtFirst(14);
    insertAtFirst(15);
    insertAtFirst(44);
    insertAtFirst(34);

    insertAtEnd(45);
    insertAtEnd(41);
    insertAtEnd(40);

    printf("\nOriginal Linkedlist\n");
    display();

    deleteAtFirst();

    deleteAtEnd();
    printf("\nAfter deletion Linkedlist\n");

    display();

    printf("\nAfter sort Linkedlist\n");
    sort();
    display();

    printf("\nAfter reverse Linkedlist\n");
    reverse();
    display();

    return 0;
}