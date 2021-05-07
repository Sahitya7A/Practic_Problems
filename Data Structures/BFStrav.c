/* Program to display Breadth First Search (BFS) Traversal of the given Graph

Example1:
Enter number of vertices : 6
Enter edge 1( -1 -1 to quit ) : 0 1
Enter edge 2( -1 -1 to quit ) : 0 2
Enter edge 3( -1 -1 to quit ) : 1 2
Enter edge 4( -1 -1 to quit ) : 1 3
Enter edge 5( -1 -1 to quit ) : 2 3
Enter edge 6( -1 -1 to quit ) : 3 4
Enter edge 7( -1 -1 to quit ) : 4 1
Enter edge 8( -1 -1 to quit ) : 4 0
Enter edge 9( -1 -1 to quit ) : 4 5
Enter edge 10( -1 -1 to quit ) : -1 -1
Enter Start Vertex for BFS:
0
0 1 2 3 4 5
Example2:
Enter number of vertices : 6
Enter edge 1( -1 -1 to quit ) : 0 1
Enter edge 2( -1 -1 to quit ) : 0 2
Enter edge 3( -1 -1 to quit ) : 1 2
Enter edge 4( -1 -1 to quit ) : 1 3
Enter edge 5( -1 -1 to quit ) : 2 3
Enter edge 6( -1 -1 to quit ) : 3 4
Enter edge 7( -1 -1 to quit ) : 4 1
Enter edge 8( -1 -1 to quit ) : 4 0
Enter edge 9( -1 -1 to quit ) : 4 5
Enter edge 10( -1 -1 to quit ) : -1 -1
Enter Start Vertex for BFS:
3
3 4 0 1 5 2
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

#define initial 1
#define waiting 2
#define visited 3

int n;
int adj[MAX][MAX];
int state[MAX];
void create_graph();
void BF_Traversal();
void BFS(int v);

int queue[MAX], front = -1,rear = -1;
void insert_queue(int vertex);
int delete_queue();
int isEmpty_queue();

int main()
{
	create_graph();
	BF_Traversal();
	return 0;
}

void BF_Traversal()
{
	int v;

	for(v=0; v<n; v++)
		state[v] = initial;

	printf("Enter Start Vertex for BFS: \n");
	scanf("%d", &v);
	BFS(v);
}

void BFS(int v)
{int i,j;
    insert_queue(v);
    state[v]=waiting;
  //  int k=delete_queue();
    //printf("%d ",k);
    //state[k]=visited;
//    for(i=0;i<n;i++)
  //  {
  while(!isEmpty_queue())
  {
   int   k=delete_queue();
      printf("%d ",k);
      state[k]=visited;
        for(j=0;j<n;j++)
        {
            if(adj[k][j]==1 && state[j]==1)
            {
               insert_queue(j);
               state[j]=waiting;
            }
        }
   }

	// Enter code here
}

void insert_queue(int vertex)
{
	if(rear == MAX-1)
		printf("Queue Overflow\n");
	else
	{
		if(front == -1)
			front = 0;
		rear = rear+1;
		queue[rear] = vertex ;
	}
}

int isEmpty_queue()
{
	if(front == -1 || front > rear)
		return 1;
	else
		return 0;
}

int delete_queue()
{
	int delete_item;
	if(front == -1 || front > rear)
	{
		printf("Queue Underflow\n");
		exit(1);
	}

	delete_item = queue[front];
	front = front+1;
	return delete_item;
}

void create_graph()
{
	int count,max_edge,origin,destin;

	printf("Enter number of vertices : ");
	scanf("%d",&n);
	max_edge = n*(n-1);

	for(count=1; count<=max_edge; count++)
	{
		printf("Enter edge %d( -1 -1 to quit ) : ",count);
		scanf("%d %d",&origin,&destin);
		if(origin==-1 && destin==-1)
		{
		    break;
		}
		if(origin>=n || destin>=n || origin<0 || destin<0)
		{
		    printf("Invalid");
		    count--;
		}
		else
		{
		   adj[origin][destin]=1;
		}

		// Enter code here
	}
}
