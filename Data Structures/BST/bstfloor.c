
/* Write a C program to find floor of a key in following BST.

              7
            /    \
           5      10
         /  \    /  \
        3    6   8   12

Note: Floor is the closest smaller or same element

Sample input:
Enter key
9
Sample output:
Floor of 9 is 8

Sample input:
Enter key
5
Sample output:
Floor of 5 is 5

*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};

struct node* insert(struct node *root, int x)
{
    if(root==NULL){
    struct node*temp  = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL;
    root=temp;
   }
    else if(x>root->data)
        root->right_child = insert(root->right_child, x);
    else
        root->left_child = insert(root->left_child,x);
    return root;
}


int floorfunc(struct node* root, int key)
{
    int floorvalue;
    if(!root)
    {
        return INT_MAX;
    }
    if(root->data==key)
    {
        return root->data;
    }
    else if(root->data > key)
    {
        return(floorfunc(root->left_child,key));
    }
    else
    {
        floorvalue=floorfunc(root->right_child,key);
        return(floorvalue<=key?(floorvalue):(root->data));
    }
  //  return root;
}
  void main()
{   int key;
    struct node* root = NULL;
    root = insert(root, 7);
    insert(root, 10);
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 8);
    insert(root, 12);
    printf("Enter key\n");
    scanf("%d",&key);
    printf("Floor of %d is %d", key,floorfunc(root, key));
}



