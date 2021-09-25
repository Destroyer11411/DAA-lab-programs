#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n_city,n_path,from,to,i,j;
    int city[100][100];

    printf("Enter the number of cities\n");
    scanf("%d",&n_city);

    printf("Enter the numner of paths\n");
    scanf("%d",&n_path);

    for(i=1;i<=n_city;i++)
    {
        printf("Enter the starting and ending city of the path:%d\n",i);
        scanf("%d %d",&from,&to);
        city[from][to]=1;
        
    }

    printf("The matrix reperesentation of the entered data is\n");
    for(i=1;i<=n_city;i++)
    {
        for(j=0;j<n_city;j++)
        {
            printf("%d\t",city[i][j]);
        }
        printf("\n");
    }

    warshal(city,n_city);

    printf("Transitive matrix\n");
    for(i=0;i<=n_city;i++)
    {
        for(j=0;j<=n_city;j++)
        {
            printf("%d\t",city[i][j]);
        }
        printf("\n");
    }



}



void warshal(int a[100][100],int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                a[i][j] = max(a[i][j],a[i][k]&&a[k][j]);
            }
        }
    }
}


int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }

    else
    {
        return b;
    }
}