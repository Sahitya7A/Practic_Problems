#include<stdio.h>
int str[30];
int front=-1,rear=-1;
int stack[30];
int top=-1;
void enqueue(int a)
{
    if(front ==-1)
    {
        front=0;
    }
    str[++rear]=a;
}
char dequeue()
{
    if(front > rear || front == -1)
    {
        printf("Underflow");
    }

    return (str[front++]);
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",str[i]);
    }
}
int main()
{
    int i,n,k;
    int s;
    scanf("%d",&n);
    printf("Enter queue elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        enqueue(s);
    }
    printf("Enter k value:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        stack[++top]=dequeue();
    }
    for(i=0;i<k;i++)
    {
        enqueue(stack[top--]);
    }
    for(i=0;i<n-k;i++)
        {
		enqueue(dequeue());
        }
        display();
        return 0;
}


/*for(i=0;i<n;i++)
	      scanf("%d",&num);
	      enqueue(num);
for(i=0;i<k;i++)
	      stack[++top]=dequeue()
for(i=0;i<k;i++){
		enqueue(stack[top--]);
for(i=0;i<n-k;i++){
		enqueue(dequeue());
display();
*/
