#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct queue
{
    int id;
    struct queue *next;
};
struct queue *rear=NULL,*front=NULL,*p,*temp;
void create(int no)
{

        if(rear==NULL)
        {
            temp=(struct queue*)malloc(sizeof(struct queue));
            temp->id=no;
//            temp->next=NULL;
            front=rear=temp;
        }
        else
        {
            temp=(struct queue*)malloc(sizeof(struct queue));
            temp->id=no;
            temp->next=NULL;
            rear->next=temp;
            rear=temp;
        }
}
void display()
{
    p=front;
    if(p==NULL)
    {
        printf("Empty");
    }
    else
    {
        while(p!=NULL)
        {
            printf("%d\t",p->id);
            p=p->next;
        }
    }
}
void delete(void)
{
    if(front==NULL)
    {
        printf("Empty");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}
int main()
{
    int i,n,rno;
    printf("Enter no. of queue's:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter data:");
        scanf("%d",&rno);
        create(rno);
    }
    display();
    delete();
    display();
}
