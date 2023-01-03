#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node*  createNode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node* root){
    struct node* prev = NULL;
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int isBST(struct node* root){
    static struct node* prev = NULL; //static variable is initialized only once, so it is used to store the previous value of the node for every recursive call
    if(root!=NULL){
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev!=NULL && root->data < prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
        
    }
    else
    {
        return 1;
    }
    
}

struct node* search(struct node* root, int key){
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right, key);
    }
    
    
    
}

int main(){
    //Constructing the binary tree
    struct node* p = createNode(5);
    struct node* p1 = createNode(3);
    struct node* p2 = createNode(6);
    struct node* p3 = createNode(1);
    struct node* p4 = createNode(4);

    //The tree is:
    //      5
    //     / \
    //    3   7
    //   / \
    //  1   4
    //
    

    //Linking the root node with the second node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Preorder traversal: \n");
    preorder(p);
    printf("\n");

    printf("Postorder traversal: \n");
    postorder(p);
    printf("\n");

    printf("Inorder traversal: \n");
    inorder(p);
    printf("\n");

    printf("Is the tree a BST? %d\n",isBST(p));

    struct node* n = search(p,3);
    if (n!=NULL)
    {
        printf("Element found: %d\n",n->data);
    }
    else
    {
        printf("Element not found\n");
    }
    
    return 0;
}