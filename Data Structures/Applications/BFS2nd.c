/* Given BFS Source code have mistakes identify those mistakes and correct it,
make it working(check test case is evaluated or not).

Test case 1:
Breadth First Search: S A B C D
*/


#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct Vertex {
   char label;
   int visited;
};
int queue[MAX];
int rear = -1;
int front = -1;
int queueItemCount = 0;
struct Vertex* lstVertices[MAX];
int adjMatrix[MAX][MAX];
int vertexCount = 0;
void insert(int data) {
   queue[rear++] = data;
   queueItemCount++;
}
int removeData() {
   queueItemCount--;
   return queue[rear++];
}
int isQueueEmpty() {
   return queueItemCount == 0;
}

void addVertex(int label) {
   struct Vertex* vertex = (struct Vertex*) malloc(sizeof(struct Vertex));
   vertex->label = label;
 //  vertex->visited = true;
   lstVertices[vertexCount++] = vertex;
}

void addEdge(int start,int end) {
   adjMatrix[start][end] = 1;
 //  adjMatrix[end][start] = 1;
}
void displayVertex(int vertexIndex) {
   printf("%c ",lstVertices[vertexIndex]->label);
}
int getAdjUnvisitedVertex(int vertexIndex) {
   int i;
   for(i = 0; i<vertexCount; i++) {
      if(adjMatrix[vertexIndex][i] == 1 && lstVertices[i]->visited == 1)
         return i;
   }
   return -1;
}

void breadthFirstSearch()
{
   int i;
   lstVertices[0]->visited = 1;
   displayVertex(0);
   insert(0);
   int unvisitedVertex;
   while(isQueueEmpty())
   {
      int tempVertex = removeData();
   //unvisitedVertex =
      while(( getAdjUnvisitedVertex(tempVertex)) != -1)
      {
         lstVertices[unvisitedVertex]->visited =0;// false;
         displayVertex(unvisitedVertex);
         insert(unvisitedVertex);
      }

   }
   for(i = 0;i<vertexCount;i++) {
      lstVertices[i]->visited =1;// false;
   }
}

int main() {
   int i, j;
   for(i = 0; i<MAX; i++)
   {
      for(j = 0; j<MAX; j++)
      {
         adjMatrix[i][j] = 0;
   }
   }
   addVertex('S');   // 0
   addVertex('A');   // 1
   addVertex('B');   // 2
   addVertex('C');   // 3
   addVertex('D');   // 4

   addEdge(0, 1);    // S - A
   addEdge(0, 2);    // S - B
   addEdge(0, 3);    // S - C
   addEdge(1, 4);    // A - D
   addEdge(2, 4);    // B - D
   addEdge(3, 4);    // C - D
   printf("\nBreadth First Search: ");
   breadthFirstSearch();
   return 0;
}


