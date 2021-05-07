/*
Write a C Program to implement BST and perform the operation delete
(All possible cases)

Test case 1(delete root node):
Enter no of  nodes
5
Enter nodes
12 4 15 6 13
Before deleting preorder
12 4 6 15 13
Enter node to delete
12
After deleting node
13 4 6 15

Test case 2 (root with no child):
Enter no of  nodes
6
Enter nodes
12 4 15 6 13 19
Before deleting preorder
12 4 6 15 13 19
Enter node to delete
13
After deleting node
12 4 6 15 19

Test case 3 (root with one child):
Enter no of  nodes
5
Enter nodes
12 4 15 6 13
Before deleting preorder
12 4 6 15 13
Enter node to delete
4
After deleting node
12 6 15 13
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};
void preorder(struct node *root)
{
    //Write code for pre-order
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left_child);
        preorder(root->right_child);
    }
}
struct node* find_minimum(struct node *root)
{
    if(root == NULL)
        return NULL;
    else if(root->left_child != NULL)
        return find_minimum(root->left_child);
    return root;
}
struct node* deletenode(struct node *root, int x)
{
    struct node *temp;
    //Write code
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(x < root->data)
    {
        root->left_child=(deletenode(root->left_child,x));
    }
    else if(x > root->data)
    {
           root->right_child=deletenode(root->right_child,x);
    }
    return root;
}
    if(root->left_child==NULL && root->right_child==NULL)
    {
        free(root);
        return NULL;
    }
    else if(root->left_child==NULL || root->right_child==NULL)
    {
        if(root->right_child==NULL)
        {
            temp=root->left_child;
            free(root);
            return temp;
        }
        else
        {
            temp=root->right_child;
            free(root);
            return temp;
        }
    }
    else
    {
        temp=find_minimum(root->right_child);
        root->data=temp->data;
        free(root);
        return temp;
    }
    return root;
}
struct node* insert(struct node *root, int x)
{
	struct node*temp  = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL;

    if(root==NULL){
     root=temp;

	}
    else if(x>root->data)
        root->right_child = insert(root->right_child, x);
    else
        root->left_child = insert(root->left_child,x);
    return root;
}
int main()
{
   int n,i,l,r,s;
    struct node *root;
    printf("Enter no of  nodes\n");
    scanf("%d",&n);
    printf("Enter nodes\n");
    for(i=1;i<=n;i++){
    	scanf("%d",&l);
      root=	insert(root,l);
	}
	printf("Before deleting preorder\n");
   preorder(root);
   printf("\nEnter node to delete\n");
    scanf("%d",&s);
  root=deletenode(root,s);
  printf("After deleting node\n");
  preorder(root);
    printf("\n");
       return 0;
}
