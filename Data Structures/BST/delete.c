/* BST Deletion

Write a C Program to implement BST and perform deletion operation (All possible cases)
Example1:
Enter no of nodes
5
Enter nodes
12 4 15 6 13
Preorder of BST before deletion
12 4 6 15 13
Enter node to delete
12
Preorder of BST after deletion
13 4 6 15

Example2:
Enter no of nodes
6
Enter nodes
12 4 15 6 13 19
Preorder of BST before deletion
12 4 6 15 13 19
Enter node to delete
13
Preorder of BST after deletion
12 4 6 15 19

Example3:
Enter no of nodes
5
Enter nodes
12 4 6 15 13
Preorder of BST before deletion
12 4 6 15 13
Enter node to delete
4
Preorder of BST after deletion
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
struct node *temp;
void preorder(struct node *root)
{
    if(root!=NULL)
    {
    	printf("%d ", root->data);
        preorder(root->left_child);
        preorder(root->right_child);

    }
}
struct node* find_min(struct node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->left_child!=NULL)
    {
        return find_min(root->left_child);
      //  return root;
    }
    return root;
}

// function to delete a node
struct node* delete(struct node *root, int x)
{
   if(root==NULL)
   {
       return NULL;
   }
   else if(x > root->data)
   {
       root->right_child=delete(root->right_child,x);
   }
   else if(x < root->data)
   {
       root->left_child=delete(root->left_child,x);
   }
   //One leaf{no child}
   else{
   if(root->left_child==NULL && root->right_child==NULL)
   {
       free(root);
       return NULL;
   }
   else if(root->left_child==NULL || root->right_child==NULL)//one children
   {
       if(root->left_child==NULL)
       {
           temp=root->right_child;
       }
       else
       {
           temp=root->left_child;
       }
       free(root);
       return temp;
   }
   else
   {
       temp=find_min(root->right_child);
       root->data=temp->data;
       root->right_child=delete(root->right_child,temp->data);
       return root;
   }
//
}
return root;
}

struct node* insert(struct node *root, int x)
{


    if(root==NULL){
    struct node*temp  = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL;
     root=temp;
	}
    else if(x > root->data){
        root->right_child = insert(root->right_child, x);}
    else {
        root->left_child = insert(root->left_child,x);}
    return root;
}

int main()
{

   int n,i,ele,a;
    struct node *root;
    printf("Enter no of nodes\n");
    scanf("%d",&n);
    printf("Enter nodes\n");
    for(i=1;i<=n;i++){
    	scanf("%d",&ele);
      root=	insert(root,ele);
	}
	printf("Preorder of BST before deletion\n");
   preorder(root);
   printf("\nEnter node to delete\n");
    scanf("%d",&a);
    root=delete(root,a);
    printf("Preorder of BST after deletion\n");
    preorder(root);
    printf("\n");
       return 0;
}






















______________________/* BST Deletion

Write a C Program to implement BST and perform deletion operation (All possible cases)
Example1:
Enter no of nodes
5
Enter nodes
12 4 15 6 13
Preorder of BST before deletion
12 4 6 15 13
Enter node to delete
12
Preorder of BST after deletion
13 4 6 15

Example2:
Enter no of nodes
6
Enter nodes
12 4 15 6 13 19
Preorder of BST before deletion
12 4 6 15 13 19
Enter node to delete
13
Preorder of BST after deletion
12 4 6 15 19

Example3:
Enter no of nodes
5
Enter nodes
12 4 6 15 13
Preorder of BST before deletion
12 4 6 15 13
Enter node to delete
4
Preorder of BST after deletion
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
struct node *temp;
void preorder(struct node *root)
{
    if(root!=NULL)
    {
    	printf("%d ", root->data);
        preorder(root->left_child);
        preorder(root->right_child);

    }
}
struct node* find_min(struct node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->left_child!=NULL)
    {
        return find_min(root->left_child);
        return root;
    }
}

// function to delete a node
struct node* delete(struct node *root, int x)
{
   if(root==NULL)
   {
       return NULL;
   }
   else if(x > root->data)
   {
       root->right_child=delete(root->right_child,x);
   }
   else
   {
       root->left_child=delete(root->left_child,x);
   }
   //One leaf{no child}
   if(root->left_child==NULL && root->right_child==NULL)
   {
       free(root);
       return NULL;
   }
   else if(root->left_child==NULL || root->right_child==NULL)//one children
   {
       if(root->left_child==NULL)
       {
           temp=root->left_child;
       }
       else
       {
           temp=root->right_child;
       }
       free(temp);
       return temp;
   }
   else
   {
       temp=find_min(root->right_child);
       root->data=temp->data;
       root->right_child=delete(root->right_child,temp->data);
       return root;
   }
}

struct node* insert(struct node *root, int x)
{


    if(root==NULL){
    struct node*temp  = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL;
     root=temp;
	}
    else if(x > root->data){
        root->right_child = insert(root->right_child, x);}
    else {
        root->left_child = insert(root->left_child,x);}
    return root;
}

int main()
{

   int n,i,ele,a;
    struct node *root;
    printf("Enter no of nodes\n");
    scanf("%d",&n);
    printf("Enter nodes\n");
    for(i=1;i<=n;i++){
    	scanf("%d",&ele);
      root=	insert(root,ele);
	}
	printf("Preorder of BST before deletion\n");
   preorder(root);
   printf("\nEnter node to delete\n");
    scanf("%d",&a);
    root=delete(root,a);
    printf("Preorder of BST after deletion\n");
    preorder(root);
    printf("\n");
       return 0;
}






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
