/* Construct BST for the given postorder traversal of the tree
Sample output:
Postorder traversal of the tree to be constructed:
1 7 5 50 40 10
Inorder traversal of the constructed tree:
1 5 7 10 40 50
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{ int data;
struct node *right;
struct node *left;
}*root;

void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
}

struct node* insert(struct node *root, int x)
{
    struct node*temp  = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    if(root==NULL){
    root=temp;
   }
    else if(x>root->data)
        root->right = insert(root->right, x);
    else
        root->left = insert(root->left,x);
    return root;
}

struct node* buildtree(int post[], int size)
{
   for(int i=size-1;i>=0;i--)
   {
       root=insert(root,post[i]);
     //  return root;
   }
}

void main()
{
    int post[] = {1, 7, 5, 50, 40, 10};
    int size = sizeof(post) / sizeof(post[0]);
    struct node *root;
    printf("Postorder traversal of the tree to be constructed:\n");
    for(int i=0;i<size;i++)
    printf("%d ",post[i]);
    root= buildtree(post,size);
    printf("\nInorder traversal of the constructed tree:\n");
    inorder(root);

}
