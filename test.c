// #include<stdio.h>
// #include<time.h>

// int main()
// {
//     clock_t start,end;
//     double clk;
//     start=clock();
//     int a=0;
//     int i;


//     for(i=0;i<10;i++)
//     {
//         a++;
//     }
//     printf("The loop ran %d times\n",a);
//     end=clock();
//     clk = (double)(end-start)/CLOCKS_PER_SEC;
//     printf("The time taken for the program to run is %d",clk);

// }

//Bubble sort//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,j,n,t;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

    printf("The number are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    printf("\nthe sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}