/*Write a c program to merge two single linked lists(a,b).

Test case 1:
number of elements in a:
3
enter 3 elements
4 2 9
number of elements in b:
4
enter 4 elements
1 6 2 8
list after merge
4       2       9       1       6       2       8
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    //if there is no elements in head print msg "NULL"
   //write code for display
   if(head==NULL)
   {
       printf("NULL\n");
   }
   else
   {
       while(head!=NULL)
       {
           printf("%d       ",head->data);
           head=head->next;
       }
   }
}
void merge(struct node *a,struct node *b)
{
    //Write code here
   while(a->next!=NULL)
   {
       a=a->next;
   }
   a->next=b;
}
int main()
{
    struct node *prev,*a, *b, *p;
    int n,i;
    printf ("number of elements in a:\n");
    scanf("%d",&n);
    a=NULL;
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(a==NULL)
            a=p;
        else
            prev->next=p;
        prev=p;
    }
    printf ("number of elements in b:\n");
    scanf("%d",&n);
    b=NULL;
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(b==NULL)
            b=p;
        else
            prev->next=p;
        prev=p;
    }
    merge(a,b);
    printf("list after merge\n");
    display(a);
    return 0;
}
