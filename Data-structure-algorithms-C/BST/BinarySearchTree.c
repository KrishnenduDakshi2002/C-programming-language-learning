#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * left, * right;
}Node;

Node * newNode(int data);
Node * minValueNode(Node * node);
Node * insert(Node * node,int data);
Node * delete(Node * root,int data);
void inOrder(Node * root);
void preOrder(Node * root);
void postOrder(Node * root);
void find(Node * node, int level,int * maxLevel,int * res);
int deepestNode (Node * node);
int CountNodeInRange(Node * node,int high, int low);//Count nodes in a BST that lies within a given range




int main()
{
    Node * root = NULL;
    
    //inserting new value to BST
    root = insert(root,25); 
    insert(root,15); 
    insert(root,30); 
    insert(root,5); 
    insert(root,18); 
    insert(root,27); 
    insert(root,35); 
    insert(root,17); 
    insert(root,16); 
    insert(root,19); 
    insert(root,20); 
    insert(root,21); 
    insert(root,22); 

    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);

    printf("\n Deepest node value is -> %d \n",deepestNode(root));
    printf("\n Node count in range [7,25]-> %d \n",CountNodeInRange(root,25,7));
    return 0;
}


//utitlity fucntion for creating new binary search tree

Node * newNode(int data){
    Node * temp = (Node * )malloc(sizeof(Node));
    temp->data = data;
    temp->left=temp->right = NULL;
    return temp;
}


// utility function to return minvalue node
Node * minValueNode(Node * node){
    Node * current = node;

    while(current && current->left != NULL)
        current = current->left;

    return current;
}

//untility function to insert a new node to a binary search tree
Node * insert(Node * node,int data){
    //if tree is empty then return a new node
    //stopping condition for recur
    if(node == NULL){
        return newNode(data);
    }

    //otherwise recur down the tree
    if(data < node->data){
        node->left = insert(node->left,data);
    }else if(data > node->data){
        node->right = insert(node->right,data);
    }

    return node;
}


//utility function to delete
Node * delete(Node * root,int data){
    //base case
    if(root == NULL){
        return root;
    }

    if(data < root->data){
        root->left = delete(root->left,data);
    }

    else if(data > root->data){
        root->right = delete(root->right,data);
    }
    else{
        //node with only one child or no child
        if(root->left == NULL){
            Node * temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node * temp = root->left;
            free(root);
            return temp;
        }

        //node with two children

        //getting the min value node in right sub tree
        Node * temp = minValueNode(root->right);

        root->data = temp->data;

        //delete min value node
        root->right = delete(root->right,temp->data);

        return root;

    }
}

//main three types of traversals 
// 1. preOrder (DLR)
// 2. InOrder (LDR)
// 3. postOrder (LRD)


//utility function for inorder traversal
void inOrder(Node * root){
    if(root != NULL){
        inOrder(root->left);  //L
        printf("%d ",root->data);  //D
        inOrder(root->right);  //R
    }
}
//utility function for inorder traversal
void preOrder(Node * root){
    if(root != NULL){
        printf("%d ",root->data); // D
        inOrder(root->left); //L
        inOrder(root->right);  //R
    }
}
//utility function for inorder traversal
void postOrder(Node * root){
    if(root != NULL){
        inOrder(root->left); // L
        inOrder(root->right); // R
        printf("%d ",root->data); //D
    }
}

//
void find(Node * node, int level,int * maxLevel,int * res){
    if(node != NULL){
        find(node->left,++level,maxLevel,res);

        if(level > *maxLevel){
            *res = node->data;
            *maxLevel = level;
        }

        find(node->right,level,maxLevel,res);
    }
}

//utility function for finding deepest node 
int deepestNode (Node * node){
    int res = -1,maxLevel = -1;
    find(node,0,&maxLevel,&res);

    return res;
}

int CountNodeInRange(Node * node,int high, int low){
    //base case
    if(node == NULL) return 0;

    int count = 0; // count of such nodes

    if(node->data >= low && node->data <= high){
        count += 1;
    }

    //recur the left subtree
    count += CountNodeInRange(node->left,high,low);
    //recur the right subtree

    return count += CountNodeInRange(node->right,high,low);
}