/* write a c program to find height of the following BST and also find level order
traversal of it along with level wise sum of the nodes.
               4
            /    \
           2      5
         /  \
        1    3

Sample output:
Height of the BST is: 3
Level Order Traversal and Level wise sum of nodes of BST:
Level 1 Nodes- 4 	Sum of Nodes at Level 1: 4
Level 2 Nodes- 2 5 	Sum of Nodes at Level 2: 7
Level 3 Nodes- 1 3 	Sum of Nodes at Level 3: 4
*/

#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* left, *right;
}*root;
 int ls;
int printlevel(struct node* root, int level)
{
  if(root==NULL)
  {
      return 0;
  }
  else if(level==1)
  {
      printf("%d ",root->data);
      ls=ls+root->data;

  }
   else if(level >1)
   {
       printlevel(root->left,level-1);
       printlevel(root->right,level-1);
   }
   return ls;
}

int height(struct node* node)
{
  if(node==NULL)
  {
      return 0;
  }
 int lheight=height(node->left);
 int rheight=height(node->right);
  if(lheight > rheight)
  {
      return lheight+1;
  }
  else
  {
      return rheight+1;
  }
}

void printlevelorder(struct node* root)
{
   int h=height(root);
   printf("Height of the BST is: %d\n",h);
   printf("Level Order Traversal and Level wise sum of nodes of BST:\n");
   for(int i=1;i<=h;i++)
   {
       printf("Level %d Nodes- ",i);
       ls=0;
       printf("Sum of Nodes at Level %d: %d\n",i,printlevel(root,i));
//       ,printlevel(root,i));
   }
}
struct node* newnode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}
int main()
{
    struct node *root = newnode(4);
    root->left        = newnode(2);
    root->right       = newnode(5);
    root->left->left  = newnode(1);
    root->left->right = newnode(3);
   printlevelorder(root);
  return 0;
}
