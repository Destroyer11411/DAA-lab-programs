// #include <stdio.h>

// int main()
// {
//     int i, j, k, n, a[10][10], indeg[10], flag[10], count = 0;
//     printf("Enter the no of vertices:\n");
//     scanf("%d", &n);
//     printf("Enter the adjacency matrix:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter row %d\n", i + 1);
//         for (j = 0; j < n; j++)
//             scanf("%d", &a[i][j]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         indeg[i] = 0;
//         flag[i] = 0;
//     }
//     for (i = 0; i < n; i++)
//         for (j = 0; j < n; j++)
//             indeg[i] = indeg[i] + a[j][i];
//     printf("\nThe topological order is:");
//     while (count < n)
//     {
//         for (k = 0; k < n; k++)
//         {
//             if ((indeg[k] == 0) && (flag[k] == 0))
//             {
//                 printf("%d ", (k + 1));
//                 flag[k] = 1;
//             }
//             for (i = 0; i < n; i++)
//             {
//                 if (a[i][k] == 1)
//                     indeg[k]--;
//             }
//         }
//         count++;
//     }
//     return 0;
// }

#include <stdio.h>
#include <time.h>
int n, a[50][50], i, j, count = 0, reach[50], pos[50];
int read_matrix()
{
    printf("\n Enter the adjacency matrix\n");
    // for (i = 1; i <= n; i++)
    //     for (j = 1; j <= n; j++)
    //         if (i != j)
    //         {
    //             printf("(%d,%d):", i, j);
    //             scanf("%d", &a[i][j]);
    //         }


    for(i=0;j<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int checkreach(int u)
{
    for (i = 1; i <= count; i++)
        if (reach[i] == u)
            return 1;
    return 0;
}
int adjacent(int i)
{
    for (j = pos[i] + 1; j <= n; j++)
        if (a[i][j] == 1)
        {
            pos[i] = j;
            return j;
        }
    pos[i] = n + 1;
    return 0;
}
int dfs(int v)
{
    int u;
    reach[++count] = v;
    u = adjacent(v);
    while (u)
    {
        if (checkreach(u) == 0)
            dfs(u);
        u = adjacent(v);
    }
}
int main()
{
    int v;
    double clk;
    clock_t starttime, endtime;
    // printf("\n\t\t\t DEPTH FIRST SEARCH \n");
    printf("\n Enter number of NODES");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    //     pos[i] = 0;
    // read_matrix();
    
    printf("Enter the adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("\n Enter the starting NODE");
    scanf("%d", &v);
    starttime = clock();
    dfs(v);
    endtime = clock();
    clk = (double)(endtime - starttime) / CLOCKS_PER_SEC;
    printf("\n ISLANDS reached from the given ISLAND are...\n");
    for (i = 1; i <= count; i++)
        printf("%d\t", reach[i]);
    printf("\nThe run time is %f\n", clk);
}