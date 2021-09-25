#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 10
void dijkstra(int G[m][m], int n, int vertex)
{
    int cost[m][m], sdist[m], pred[m];
    int visited[m], count, min, next, i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                cost[i][j] = 9999;
            else
                cost[i][j] = G[i][j];
    for (i = 0; i < n; i++)
    {
        sdist[i] = cost[vertex][i];
        pred[i] = vertex;
        visited[i] = 0;
    }
    sdist[vertex] = 0;
    visited[vertex] = 1;
    count = 1;
    while (count < n - 1)
    {
        min = 9999;
        for (i = 0; i < n; i++)
            if (sdist[i] < min && !visited[i])
            {
                min = sdist[i];
                next = i;
            }
        visited[next] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (min + cost[next][i] < sdist[i])
                {
                    sdist[i] = min + cost[next][i];
                    pred[i] = next;
                }
        count++;
    }
    for (i = 0; i < n; i++)
        if (i != vertex)
        {
            printf("%d to %d is %d\n", vertex, i, sdist[i]);
        }
}
void main()
{
    int G[m][m];
    int n, i, j, u;
    printf("Enter the number of cities:\n");
    scanf("%d", &n);
    printf("Enter the distance matrix of cities:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }
    printf("Enter the starting city:\n");

    scanf("%d", &u);
    dijkstra(G, n, u);
}