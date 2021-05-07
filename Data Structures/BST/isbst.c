/*Binary tree is BST or not
 Write a c program to check whether following binary tree is BST or not
               3
            /    \
           2      5
         /  \
        1    4
Sample output:
Inorder Traversal of Binary Tree:
1 2 4 3 5
Binary Tree is not a BST*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{ int data;
struct node *right;
struct node *left;
};
int inorderarr[20],ind=0;
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d ",root->data);
inorderarr[ind]=root->data;
ind++;
inorder(root->right);
}
}

/*int isBST(struct node* node, int min, int max)
{

}
*/
int bstcheck(struct node* node)
{
    int flag=0;
  for(int i=0;i<ind-1;i++)
  {
      if(inorderarr[i] > inorderarr[i+1])
      {
         // return root;
          flag=1;
      }
  }
  if(flag!=0)
  {
      //return node
      printf("Binary Tree is not a BST");

  }
  else
  {
     // return NULL;
       printf("Binary Tree is a BST");
  }
}

struct node* newnode(int data)
{
  struct node* node = (struct node*) malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}


void main()
{
  struct node *root = newnode(3);
  root->left        = newnode(2);
  root->right       = newnode(5);
  root->left->left  = newnode(1);
  root->left->right = newnode(4);
  printf("Inorder Traversal of Binary Tree:\n");
  inorder(root);
  printf("\n");
 // if(
 bstcheck(root);
  }


