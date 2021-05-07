/* BST Creation and Traversal

Write a c program to implement binary search tree to perform the following operations
1. Creation 2. Traversal (inorder, preorder and postorder)

Sample input:
Enter no of nodes
5
Enter nodes
30 20 50 60 40

Sample output:
Inorder Traversal
20 30 40 50 60
Preorder Traversal
30 20 50 40 60
Postorder Traversal
20 40 60 50 30

 */

#include <stdio.h>
#include <stdlib.h>
struct node
{   int data;
    struct node *right_child;
    struct node *left_child;
};
struct node *temp;
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left_child);
        printf("%d ",root->data);
        inorder(root->right_child);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        inorder(root->left_child);
        inorder(root->right_child);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left_child);
        inorder(root->right_child);
        printf("%d ",root->data);
    }
}
struct node* insert(struct node *root, int x)
{
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->right_child=NULL;
  temp->left_child=NULL;
  if(root==NULL)
  {
      root=temp;
  }
  else if(x > root->data)
       root->right_child=insert(root->right_child,x);
  else
      root->left_child=insert(root->left_child,x);
  return root;
}
void main()
{
    int n,i,ele,s;
    struct node *root;
    printf("Enter no of nodes \n");
    scanf("%d",&n);
    printf("Enter nodes \n");
    for(i=1;i<=n;i++)
   {
    scanf("%d",&ele);
    root=insert(root,ele);
	}
  printf("Inorder Traversal\n");
   inorder(root);
    printf("\n");
    printf("Preorder Traversal\n");
   preorder(root);
    printf("\n");
    printf("Postorder Traversal\n");
   postorder(root);
   return 0;
}
