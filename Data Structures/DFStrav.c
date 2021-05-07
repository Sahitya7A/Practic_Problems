/* Graph DFS traversal
Example:
Enter number of vertices:6

Enter adjecency matrix of the graph:
0 1 1 0 0 0
0 0 1 1 0 0
0 0 0 1 0 0
0 0 0 0 1 0
1 1 0 0 0 1
0 0 0 0 0 0
Enter start vertex:4
DFS Traversal:
4 0 1 2 3 5
*/
#include<stdio.h>

void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]

void main()
{
    int v,i,j;
    printf("Enter number of vertices:");

	scanf("%d",&n);

    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:\n");

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
 scanf("%d",&G[i][j]);

    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
        printf("Enter start vertex:");
 scanf("%d",&v);
    DFS(v);
}

void DFS(int i)
{
    int j;
   printf("%d ",i);
   visited[i]=1;
   for(j=0;j<n;j++)
   {
       if(!visited[j]&&G[i][j]==1)
       {
           DFS(j);
       }
   }
}

