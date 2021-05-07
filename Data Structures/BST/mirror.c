/*2.Convert a Binary  Search Tree into its Mirror Tree
sample Output:
Enter no of  nodes
5
Enter  nodes
12
4
5
15
13
Inorder traversal of the constructed tree is
4  5  12  13  15
Inorder Traversal of mirror tree
15  13  12  5  4
*/


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
}*root,*temp;
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left_child);
        printf("%d ", root->data);
        inorder(root->right_child);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
    	printf("%d ", root->data);
        preorder(root->left_child);

        preorder(root->right_child);

    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {

        postorder(root->left_child);
        postorder(root->right_child);
        printf("%d ", root->data);
    }
}
struct node* newnode(int x)
{
    temp  = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL;
    return temp;
    }
struct node* insert(struct node *root , int x)
{
     if(root==NULL){
     return newnode(x);
   }

    else if(x>root->data)
        root->right_child = insert(root->right_child, x);
    else
        root->left_child = insert(root->left_child,x);
    return root;
}
void mirror(struct node* root)
{
    int temp;
    if(root==NULL)
    {
        return;
    }
    else
    {
        mirror(root->left_child);
        mirror(root->right_child);
        temp=root->left_child;
        root->left_child=root->right_child;
        root->right_child=temp;
    }
  // write code here
}

int main()
{
    int n,i,r;
    printf("Enter no of  nodes \n");
    scanf("%d",&n);
    printf("Enter  nodes \n");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&r);
    root=insert(root,r);
    }
      printf("Inorder traversal of the constructed"
           " tree is \n");
     inorder(root);
     printf("\n");
    mirror(root);
   printf("Inorder Traversal of mirror tree\n");
   inorder(root);
//  preorder(root);
//     printf("\n");
//      postorder(root);
//    printf("\n");

    return 0;
}



