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

int main(){
  /*   //Constructing the root node
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = 2;
    p->left= NULL;
    p->right = NULL;

    //Constructing the second node
    struct node* p1 = (struct node*)malloc(sizeof(struct node));
    p1->left= NULL;
    p1->right = NULL;

    //Constructing the third node
    struct node* p2 = (struct node*)malloc(sizeof(struct node));
    p2->left= NULL;
    p2->right = NULL;

    //Linking the root node with the second node
    p->left = p1;
    p1->right = p2;
 */

    //Constructing the root node
    struct node* p = createNode(2);
    //Constructing the second node
    struct node* p1 = createNode(3);
    //Constructing the third node
    struct node* p2 = createNode(4);

    //Linking the root node with the second node
    p->left = p1;
    p->right = p2;


    return 0;
}
