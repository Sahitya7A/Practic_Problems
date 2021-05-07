/* Program to implement Queue operations using Array
Sample input:

enter the number of elements :4
Insert the element in queue : 11
Insert the element in queue : 12
Insert the element in queue : 13
Insert the element in queue : 14
Elements in Queue are :
11 12 13 14
Element deleted from queue is : 11
Elements in Queue are :
12 13 14
*/
#include<stdio.h>
#define MAX 50
void enqueue();
void dequeue();
int arr[MAX];
void display();
int front=-1,rear=-1;
void main()
{
    int i,n;
    printf("enter the number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        enqueue();
    printf("Elements in Queue are :\n");
    display();
    dequeue();
    printf("Elements in Queue are :\n");
    display();
}
void enqueue()
{
    printf("Insert the element in queue : ");
    if(rear==MAX-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        scanf("%d",&arr[++rear]);
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Overflow");
    }
    else
    {
        printf("\nElement deleted from queue is : %d\n",arr[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1||front>rear)
    {
        printf("Underflow");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}
