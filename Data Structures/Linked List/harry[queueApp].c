 /*Queue Application-Monk and Chamber of Secrets

Problem:
Hagrid says "follow the spiders" and so Harry and Ron head to the Forbidden Forest. There they meet Aragog,
a giant spider who tells them about the innocence of Hagrid. But Aragog only allows Hagrid to go back.
These boys have got into a serious trouble now.
The only way to escape as Aragog says is to answer a question.
Aragog shows them a queue of N spiders of which only X spiders are to be selected.
Each spider has some power associated with it. There are X iterations on the queue.
In each iteration, X spiders are dequeued (if queue has less than X entries, all of them will be dequeued) and
the one with maximum power is selected and remaining spiders are enqueued back to the queue
(in the order they were dequeued) but their power is decreased by one unit. If there are multiple spiders with maximum
power in those dequeued spiders, the one which comes first in the queue is selected. If at any moment ,
power of any spider becomes 0, it can't be decremented any further, it remains the same.
Now, Aragog asks the boys to tell him the positions of all the selected spiders (positions in the initial given queue)
in the order they are selected. As the boys are frightened and can't think of anything , they call Monk for the rescue.
Help Monk to get the answer
fast and save the boys.
Input Format:
The first line consists of two space separated integers N and X, denoting the number of spiders in the queue and
the number of spiders that have to be selected respectively.
The next line consists of an array A, A[i] denoting the power of spider at position i (1≤i≤N).
Output Format:
For each of the X iterations, output the position of the selected spider in that iteration.
Position refers to the index at which the spider was present in the initial given queue (1 based indexing).
Constraints:
1≤X≤316
X≤N≤X∗X
1≤A[i]≤X; 1≤i≤N
SAMPLE INPUT
 .
6 5
1 2 2 3 4 5
SAMPLE OUTPUT

5 6 4 1 2
Explanation
The initial queue: 1,2,2,3,4,5
In first iteration, starting 5 entries are removed from the queue.
The removed entries are:[1,2,2,3,4].
The queue now becomes: [5] The maximum power spider is present at index 5 in the given initial queue.
So, we print 5 and power of remaining spiders in the removed ones is decremented by 1 unit and enqueued back
to the queue.
The queue now becomes: [5,0,1,1,2]
In the second iteration, we print index 6 as element 5 is present at index 6 in the initial queue.
After the second iteration, the queue becomes: [0,0,0,1]
Note that the power of spider with power 0 after the first iteration still remains 0.
Example:
6 5
1 2 2 3 4 5
5 6 4 1 2
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct queue
{
    int num;
    int index;
    struct queue* next;
};
struct queue* front1 = NULL;
struct queue* rear1 = NULL;
struct queue* front2 = NULL;
struct queue* rear2 = NULL;
struct queue* prev = NULL;
void enqueue(int num,int i)
{
    struct queue* temp = (struct queue*)malloc(sizeof(struct queue));
    temp->num = num;
    temp->index = i;
    temp->next = NULL;
    if(front1 == NULL)
    {
        front1 = rear1 = temp;
    }
    else
    {
        rear1->next = temp;
        rear1 = temp;
    }
}
void enqueue1(struct queue *q)
{
    struct queue* temp = (struct queue*)malloc(sizeof(struct queue));
    temp->num = q->num;
    temp->index = q->index;
    temp->next = NULL;
    if(front1 == NULL)
    {
        front1 = rear1 = temp;
    }
    else
    {
        rear1->next = temp;
        rear1 = temp;
    }
}
struct queue * dequeue1()
{
    int n;
    struct queue* dtemp = front1;
    if(front1 == NULL)
    {
        return NULL;
    }
    else
    {
        n = front1->num;
        front1 = front1->next;
        return(dtemp);
    }
}
void enqueue2(struct queue *q)
{
    struct queue* temp = (struct queue*)malloc(sizeof(struct queue));
    temp->num = q->num;
    temp->index =q->index ;
    temp->next = NULL;
    if(front2 == NULL)
    {
        front2 = rear2 = temp;
    }
    else
    {
        rear2->next = temp;
        rear2 = temp;
    }
}
struct queue * dequeue2()
{
    int n;
    struct queue* dtemp = front2;
    if(front2 == NULL)
    {
       return NULL;
    }
    else
    {
        n = front2->num;
        front2 = front2->next;
        return (dtemp);
    }
}
int Max(struct queue *q)
{
    struct queue *temp = q;
    int max = 0,index;
    while(q!=NULL)
    {

        if(q->num > max)
        {
            max = q->num;
            index = q->index;
        }
        q = q->next;
    }
    while(q!=NULL)
    {
        if(index == q->index){
        if(q == front1)
            {
                front1 = q->next;
            }
            else
            {
                prev->next = q->next;
            }
            free(q);

        }
        prev = q;
        q = q->next;

    }
    return index;
}
void display1()
{
  struct queue* disp = front1;
  if(front1 == NULL)
  {
      printf("Queue is empty");
  }
  else
  {
      while(disp != NULL)
      {
          printf("%d %d\n",disp->num,disp->index);
          disp = disp->next;
      }
  }
}
void display2()
{
  struct queue* disp = front2;
  if(front2 == NULL)
  {
      printf("Queue is empty");
  }
  else
  {
      while(disp != NULL)
      {
          printf("%d %d\n",disp->num,disp->index);
          disp = disp->next;
      }
  }
}

int main()
{
    int n,i,x,id,value = 0;
    printf("Total number of spy : ");
    scanf("%d",&n);
    printf("Enter X");
    scanf("%d",&x);
    printf("Enter data\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&id);
        enqueue(id,i);
    }
    for(i=1;i<=x;i++)
    {
        enqueue2(dequeue1());
    }

    value = Max(front2);
    printf("Max value : %d",value);
    for(i=1;i<=x;i++)
    {
        enqueue1(dequeue2());
    }
    printf("Data Entered:q1\n");
    display1();
    printf("Data Entered:q2\n");
    display2();
    printf("Max value : %d",value);
    return 0;
}


















