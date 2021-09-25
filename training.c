#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,n,a[10],key;

    printf("enter the number of medicenes\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    
        a[i]=rand()%100;
    


     printf("the medicine available are\n");
    for(i=0;i<n;i++)
    
        printf("%d\t",a[i]);


    printf("\nenter the medicene key\n");
    scanf("%d",&key);

  
    

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("the required medicene %d is found at the location %d\n",key,i+1);
        }
        return 0;
    }

    printf("not found\n");
}