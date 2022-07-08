#include <stdio.h>
#define V 4
#define INF 99999
void floydWarshall(int grp[][V])
{
   int Distance[V][V], i, j, k;
   for (i = 0; i < V; i++)
      for (j = 0; j < V; j++)
         Distance[i][j] = grp[i][j];
   for (k = 0; k < V; k++)
   {
      for (i = 0; i < V; i++)
      {
         for (j = 0; j < V; j++)
         {
            if (Distance[i][k] + Distance[k][j] < Distance[i][j])
               Distance[i][j] = Distance[i][k] + Distance[k][j];
         }
      }
   }
   printSolution(Distance);
}

void printSolution(int Distance[][V])
{
   printf("The following matrix shows the shortest distances"" between every pair of vertices \n");
   for (int i = 0; i < V; i++)
   {
      for (int j = 0; j < V; j++)
      {
         if (Distance[i][j] == INF)
            printf("%7s", "INF");
         else
            printf("%7d", Distance[i][j]);
      }
      printf("\n");
   }
}
int main()
{
   int grp[V][V] = {{0, 5, INF, 10}, {INF, 0, 3, INF}, {INF, INF, 0, 1}, {INF, INF, INF, 0}};
   floydWarshall(grp);
   return 0;
}
