/*Interleave the first half of the queue with second half
Given a queue of integers of even length, rearrange the elements by interleaving the first half
of the queue with the second half of the queue.

Only a stack can be used as an auxiliary space.

Examples:

Input :  1 2 3 4
Output : 1 3 2 4

Input :  11 12 13 14 15 16 17 18 19 20
Output : 11 16 12 17 13 18 14 19 15 20
Following are the steps to solve the problem:
1.Push the first half elements of queue to stack.
2.Enqueue back the stack elements.
3.Dequeue the first half elements of the queue and enqueue them back.
4.Again push the first half elements into the stack.
5.Interleave the elements of queue and stack.*/
/*Sample Input:
Enter size of Queue(note: n should be even no) :
8
Enter elements:
1 2 3 4 5 6 7 8
Data in queue
1 5 2 6 3 7 4 8  */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct queue {
	int num;
	struct queue* next;
};
struct queue* front=NULL;
struct queue* rear=NULL;
int stack[10],top=-1;
void enqueue(int num)
{
	struct queue* temp=(struct queue*)malloc(sizeof(struct queue));

	temp->num=num;
	temp->next=NULL;
	if(front==NULL){
		front=rear=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
	}
 int dequeue(){
 int n;
	struct queue* dtemp=front;
	if(front==NULL){
		return -1;
	}
	else{ n=front->num;
		front=front->next;
		free(dtemp);
		return n;
	}
	}
void push()
{

}
void display(){
	struct queue* disp=front;
	if(front==NULL){
		printf("queue is empty\n");
	}
	else{

		while(disp!=NULL){
			printf("%d ",disp->num);
			disp=disp->next;
		}
	}
}
int main()
{
    int i,n,id;
    printf("Enter size of Queue(note: n should be even no) :\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&id);
        enqueue(id);
    }
    for(i=0;i<n/2;i++)
    {
    dequeue();
    }

	printf("Data in queue\n");
	display();
}
