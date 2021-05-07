
/* K-th ancestor of a node in BST
Given a binary search tree in which nodes are numbered from 1 to N. Given a node and a
positive integer K. We have to print the Kth ancestor of the given node in the binary search tree.
If there does not exist any such ancestor then print -1 and
if node itself does not exist print “Node not found”.

For example in the below given binary search tree, 2nd ancestor of node 8 and 12 is 7.
3rd ancestora of node 6 will be -1.

              7
            /    \
           5      10
         /  \    /  \
        3    6   8   12

Constraint: k>0

Sample input:
Enter node and k values:
8 2
Sample output:
K-th Ancestor of 8 is 7

Sample input:
Enter node and k values:
12 2
Sample output:
K-th Ancestor of 12 is 7

Sample input:
Enter node and k values:
6 3
Sample output:
-1

Sample input:
Enter node and k values:
4 1
Sample output:
Node not found
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_SIZE 50
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};
int stack[MAX_SIZE], top=-1;


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

int search(struct node *root, int x)
{
  if(root==NULL)
  {
      printf("Node not found");
      exit(0);
  }
  else
  {
      stack[++top]=root->data;
      if(root->data==x)
      {
          return root;
      }
      else if(x > root->data)
      {
          return(search(root->right_child,x));
      }
      else
      {
          return(search(root->left_child,x));
      }
  }
}

void printk_anc(int key, int k)
{
    top=top-k;
    if(top > -1)
    {
        printf("K-th Ancestor of %d is %d",key,stack[top]);
    }
    else
    {
        printf("-1");
    }
}


  void main()
{   int key,k;
    struct node* root = NULL;
    root = insert(root, 7);
    insert(root, 10);
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 8);
    insert(root, 12);
    printf("Enter node and k values:\n");
    scanf("%d%d",&key,&k);
    search(root,key);
    printk_anc(key,k);

}
