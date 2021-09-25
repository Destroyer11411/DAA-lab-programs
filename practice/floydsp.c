#include<stdio.h>
#include<stdlib.h>
int mat[100][100],d_mat[100][100],n;

int main()
{
    int i,j;
    printf("Enter the number of citites\n");
    scanf("%d",&n);

    printf("Enter the connection matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    floyd(mat);

    printf("The shortest path matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d_mat[i][j]);
        }
        printf("\n");
    }


}
void floyd()
{
    int i,j,k;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d_mat[i][j]=mat[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(d_mat[i][j]>(d_mat[i][k]+d_mat[k][j]))
                {
                    d_mat[i][j] = d_mat[i][k] + d_mat[k][j];
                }
            }
        }
    }
}