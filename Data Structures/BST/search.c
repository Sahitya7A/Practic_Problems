/* BST Search

Write a c program to implement binary search tree to perform the following operations
1. Creation  2. Search 3.Traversal (inorder)
Example 1:
Enter no of nodes
5
Enter nodes
4 2 3 1 5
Inorder Traversal
1 2 3 4 5
Enter node to search
2
Node found

Example 2:
Enter no of nodes
5
Enter nodes
3 2 1 5 4
Inorder Traversal
1 2 3 4 5
Enter node to search
8
Node not found

*/


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left_child);
        printf("%d ", root->data);
        inorder(root->right_child);
    }
}
struct node* search(struct node *root, int x)
{
//    if(root!=NULL)
  //  {
        if(root==NULL||root->data==x)
        {
            return root;
        }
    else if(x > root->data)
    {
      //  root->right_child=
      return(search(root->right_child,x));
    }
    else
    {
       // root->left_child=
        return(search(root->left_child,x));
    }
  //  return root;
  //  }
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

void main()
{
    int n,i,ele,s;
    struct node *root;
    printf("Enter no of nodes \n");
    scanf("%d",&n);
    printf("Enter nodes \n");
    for(i=1;i<=n;i++){
    	scanf("%d",&ele);
      root=insert(root,ele);
	}
  printf("Inorder Traversal\n");
   inorder(root);
    printf("\n");
    printf("Enter node to search \n");
    scanf("%d",&s);
        if(search(root,s))
        printf("Node found\n");
        else
        printf("Node not found\n");

}
