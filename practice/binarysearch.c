#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,i,k;
    printf("Enter the number of product ID's\n");
    scanf("%d",&n);
    
    
    int a[n];


    srand(time(0));

    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

    printf("These are the ID's available\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nenter the key to be found\n");
    scanf("%d",&k);

    int l=0,r=n-1,m;

    while(l<=r)
    {
        m=(l+r)/2;

        if(k<=a[m])
        {
            r=m-1;
        }

        if(k>a[m])
        {
            l=m+1;
        }

        if(k==a[m])
        {
            printf("The key %d was found at the location %d\n",k,m);
            return 0;
        }
    }



}