#include<stdio.H>
#include<stdlib.h>
#include<time.h>

int a[100][100],visited[100],n,cost=0;
int mincost(int city);
int least(int c);

int main()
{
    int i,j;
    printf("Enter the number of cities\n");
    scanf("%d",&n);

    printf("Enter the cost matrix\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            visited[i]=0;
        }
    }

    printf("The entered cost matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    mincost(0);

}

int mincost(int city)
{
    int ncity;
    visited[city]=1;
    printf("%d-->",city+1);
    ncity = least(city);

    if(ncity==999)
    {
        ncity=0;
        printf("%d",ncity+1);
        cost+=a[city][ncity];
        return;
    }

    mincost(ncity);
}

int least(int c)
{
    int min=999,nc=999,kmin,i;

    for(i=0;i<n;i++)
    {
        if((a[c][i]!=0) && (visited[i]==0))
        {
            if(a[c][i]<min)
            {
               
                min = a[c][i];
                nc=i;
            }
        }
    }

    if(min!=999)
    {
        cost +=min;
    }
    return nc;
}