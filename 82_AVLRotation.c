#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node* left;
    struct Node* right;
    int height; // height of the node

};

int max(int a, int b){
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int getHeight(struct Node* n){
    if (n==NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
    
}

void preorder(struct Node* root){
    if(root!=NULL){
        printf("%d ",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

struct Node* createNode(int key){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;

}

int getBalanceFactor(struct Node* n){
    if (n==NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
    
}


struct Node* leftRotate(struct Node* x){
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x; //perform the rotation see the diagram or make a diagram
    x->right = T2; //perform the rotation see the diagram or make a diagram

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1; //update the height of y
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1; //update the height of x

    return y; //return the new root

}


struct Node* rightRotate(struct Node* y){
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y; //perform the rotation see the diagram or make a diagram
    y->left = T2; //perform the rotation see the diagram or make a diagram

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1; //update the height of y
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1; //update the height of x

    return x; //return the new root

}

struct Node* insert(struct Node* node, int key){
    if (node==NULL)
    {
        return createNode(key);
    }

    if (key < node->key)
    {
        node->left = insert(node->left,key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1; //update the height of the node since balance factor is calculated using height
    int balancefactor = getBalanceFactor(node);

    //LL
    //check if the node is unbalanced and it is left left case
    if (balancefactor > 1 && key<node->left->key)
    {
        return rightRotate(node);
    }
    

    //LR
    if (balancefactor > 1 && key > node->left->key)
    {
        node->left = rightRotate(node->left);
        return leftRotate(node);
    }
    


    //RR

    if (balancefactor < -1 && key > node->right->key )
    {
        return leftRotate(node);
    }
    

    //RL
    if (balancefactor > 1 && key < node->right->key)
    {
        node->right = leftRotate(node->right);
        return rightRotate(node);
    }

    return node;
    
    
    
    
}


int main(){
    struct Node* root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    preorder(root);
    printf("\n");


    return 0;
}