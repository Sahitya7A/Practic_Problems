/* Generate process scheduling sequence based on Round-robin strategy
for given set of processes using queue.

In Round-robin algorithm, every process gets executed in a cyclic way.
A certain time slice is defined in the system which is called time quantum or time slice.
Each process present in the queue is assigned the CPU for that time quantum,
if the execution of the process is completed during that time
then the process will terminate else the process will wait for the next turn to
complete its execution.

Read process execution time (burst time) of the processes as they arrive into queue.
Read time slice for which each process is to be executed by the processor.
Generate process scheduling sequence based on Round-robin algorithm .

Example1:
Enter no. of processes:
5
Enter execution time of 5 processes:
2 3 1 5 4
Enter time slice:
2
Round-robin process scheduling:
| P0 | P1 | P2 | P3 | P4 | P1 | P3 | P4 | P3 |

Example2:
Enter no. of processes:
6
Enter execution time of 6 processes:
3 6 2 1 4 2
Enter time slice:
2
Round-robin process scheduling:
| P0 | P1 | P2 | P3 | P4 | P5 | P0 | P1 | P4 | P1 |

*/

#include <stdio.h>
#define MAX 50
void enqueue(int);
void display();
int bt[MAX];
int rear = - 1;
int front = - 1;
int tslice,flag;
void enqueue(int t)
{   if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    { if (front == - 1)
       front = 0;
       rear = rear + 1;
        bt[rear] = t;
    }
}

void display()
{
    int i;
    flag=0;
    for(i=front;i<=rear;i++)
    {
        if((bt[i]>0 && bt[i]<=tslice)|| tslice==0)
        {
            bt[i]=0;
            printf("|P%d",i);
            flag=1;
        }
        else if(bt[i]>tslice)
        {
            bt[i]-=tslice;
            printf("|P%d",i);
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
}
int main()
{
    int j,s,a;
    printf("Enter no. of processes:  \n");
    scanf("%d",&a);
    printf("Enter execution time of %d processes: \n",a);
    for(j=0;j<a;j++)
    {
        scanf("%d",&s);
        enqueue(s);
    }
    printf("Enter time slice:\n");
    scanf("%d",&tslice);
    printf("Round-robin process scheduling: \n");
    do
    {
        display();
    }while(flag!=0);
    printf("|");
    return 0;
}
