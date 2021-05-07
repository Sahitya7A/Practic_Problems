/*Print Binary Search Tree in Min Max Fashion

Min-max fashion means you have to print the maximum node first then the minimum then the second maximum then the second minimum and so on.

Construct following BST and print its nodes in Min Max order.
              7
            /    \
           5      10
         /  \    /  \
        3    6   8   12

Sample output:
INORDER Traversal of BST
3 5 6 7 8 10 12
MIN MAX order of BST
3 12 5 10 6 8 7 */

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
int inorderarr[MAX_SIZE];
int ind=0;


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

void inorder(struct node *root)
{
    if(root!=NULL)
    {
       inorder(root->left_child);
       printf("%d ",root->data);
       inorderarr[ind]=root->data;
       ind++;
       inorder(root->right_child);
    }
}

void print(struct node* root)
{
    int i,j,n;
    for(i=0,j=ind-1;i<=j;i++,j--)
    {
        if(i==j)
        {
           printf("%d ",inorderarr[i]);
        }
        else
        {
            printf("%d %d ",inorderarr[i],inorderarr[j]);
        }
    }
}


  void main()
{
    struct node* root = NULL;
    root = insert(root, 7);
    insert(root, 10);
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 8);
    insert(root, 12);
    printf("INORDER Traversal of BST\n");
    inorder(root);
    printf("\nMIN MAX order of BST\n");
    print(root);

}
