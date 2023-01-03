#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root)
{
    struct node *prev = NULL;
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL; // static variable is initialized only once, so it is used to store the previous value of the node for every recursive call
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data < prev->data)
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

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

struct node *searchIter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    // if the root is null itself, then return null
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("%d already exists, cannot insert\n", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createNode(key);
    // prev is the parent of the new node since the root will hit NULL
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

struct node* inOrderPredecessor(struct node* root){
    //rightmost child of the left subtree
    root = root->left;

    while (root->left!=NULL && root->right!=NULL)
    {
        root = root->right;
    }
    return root;
    

}

struct node* deleteNode(struct node* root, int value){

    struct node* predecessor;

    if (root==NULL)
    {
        return NULL;
        printf("here1\n");
    }
    if (root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    
    

    //search for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }

    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    //deletion strategy when the node with desired value is found
    else
    {   
        predecessor = inOrderPredecessor(root); //get the predecessor of the node to be deleted
        root->data = predecessor->data; //replace the data of the node to be deleted with the data of the predecessor
        root->left = deleteNode(root->left,predecessor->data);
        
    }

    return root;
    
    
    
}

int main()
{
    // Constructing the binary tree
    struct node *p = createNode(10);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(12);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(5);

    // The tree is:
    //        10
    //       /  \
    //      3    12
    //     / \   /
    //    1   5 11
    //

    // Linking the root node with the second node
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

    printf("Is the tree a BST? %d\n", isBST(p));

    /*     struct node *n = searchIter(p, 5);
        if (n != NULL)
        {
            printf("Element found: %d\n", n->data);
        }
        else
        {
            printf("Element not found\n");
        } */

    insert(p, 4);
    printf("Inorder traversal: \n");
    inorder(p);
    printf("\n");

    /* // printf("%d\n",p->right->left->data);
    insert(p, 9);
    printf("Inorder traversal: \n");
    inorder(p);
    printf("\n");
    insert(p, 13);
    printf("Inorder traversal: \n");
    inorder(p);
    printf("\n"); */
    deleteNode(p, 10);
    printf("Inorder traversal: \n");
    inorder(p);
    printf("\n");

    return 0;
}