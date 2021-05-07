/*
    write a c progarm to implement  stack using linked list and
    perform the operations i) push ii) pop iii) display

Test case 1:
Enter no.of students
3
Enter id name marks
1 sam 450
Enter id name marks
2 ram 459
Enter id name marks
3 sita 367
data in stack
3 sita 367
2 ram 459
1 sam 450
after pop the top node
2 ram 459
1 sam 450

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int id;
    char rname[20];
    int mark;
    struct stack *next;
};
struct stack* top=NULL,*p;
struct stack *temp;
void push(int no,char name[],int marks)
{
        temp=(struct stack *)malloc(sizeof(struct stack));
       // temp->next=NULL;
        temp->id=no;
        strcpy(temp->rname,name);
       // top->rname=name[];
        temp->mark=marks;
        temp->next=top;
        top=temp;
}
void pop()
{
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp=top;
        top=top->next;
        free(temp);
    }
}
void display()
{
    p=top;
	if(p==NULL)
	{
	    printf("stack is empty");
	}
	else
	{
	    while(p!=NULL)
	    {
	        printf("%d %s %d\n",p->id,p->rname,p->mark);
	        p=p->next;
	    }
	}
}
int main(){
	int i,n,id,marks;
	char sname[10];
	printf("Enter no.of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id name marks\n");
		scanf("%d %s %d",&id,sname,&marks);
		push(id,sname,marks);
	}
	printf("data in stack\n");
	display();
	pop();
	printf("after pop the top node\n");
	display();
}


