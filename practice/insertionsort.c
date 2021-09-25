#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionsort( int a[],int n);

int main()
{
    int i,j,n;
    
    clock_t  start,end;
    double d;
    
    printf("Enter the total number of contacts\n");
    scanf("%d",&n);

    int a[n];

    srand(time(0));

    for(i=0;i<n;i++)
    {
        a[i] = rand()%10000000;
    }

    printf("The numbers are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    start = clock();
    insertionsort(a,n);
    end = clock();

     printf("\nThe sorted numbers are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    d = (double)(end-start)/CLOCKS_PER_SEC;

    printf("\nThe time taken for the sorting of the numbers is:%f\n",d);

    



}

// void insertionsort(int a[],int n)
// {
//     int i,j,v;
//     for(i=1;i<n;i++)
//     {
//         v= a[i];
//         j=i-1;

//         while(j>=0 && a[j]>v)
//         {
//             a[j+1] = a[j];
//             j = j-1;
//         }
//         a[j+1] = v;
//     }
// }




void insertionsort(int a[],int n)
{
    int i,j,v;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;

        while(j>=0 && a[j]>v)
        {
            a[j+1] = a[j];
            j = j-1;
        }

        a[j+1] = v;
    }
}