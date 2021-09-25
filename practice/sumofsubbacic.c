// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int i,n,s=0,f;
//     printf("Enter the numnber of elements\n");
//     scanf("%d",&n);

//     int a[n];

//     printf("Enter %d elements\n",n);

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//         s+=a[i];

//     }
//     printf("Enter the sum to be found\n");
//     scanf("%d",f);

//     int r=0;

//     if(s<f)
//     {
//         printf("The number can't be found\n");
//         return 1;
//     }
//     r = sos (a,n,f);


// }





// int sos (int a[],int n,int f)
// {

// }


// #include<stdio.h>
// #include<stdlib.h>

// int m=0;
// int *w;
// int *x;

// void sos(int s,int k,int r);

// int main()
// {
//     int i=0,sum=0,n=0;
//     printf("Enter the number of elements in array\n");
//     scanf("%d",&n);

//     //  w = (int *)malloc(sizeof(int) * n + 1);
//     // x = (int *)malloc(sizeof(int) * n + 1);

//     w = (int *) malloc (sizeof(int) * n+1);
//     x = (int *) malloc(sizeof(int) * n+1);

//     printf("enter the %d numbers\n",n);
//     for(i=1;i<=n;i++)
//     {
//         scanf("%d",&w[i]);
//         sum+=w[i];
//         x[i] = 0;
//     }

//     printf("Enter the sum to be obtained\n");
//     scanf("%d",&m);

//     if(sum<m)
//     {
//         printf("NOT POSSIBLE\n");
//         exit(1);
//     }

//     printf("The possible subsets are\n");
//     sos(0,1,sum);


// }


// void sos(int s,int k,int r)
// {
//     int i=0;
//     x[k]=1;
//     if(s + w[k] == m)
//     {
//         for(i=1;i<=k;i++)
//         {
//             if(x[i]==1)
//             {
//                 printf("\t%d",w[i]);
//             }
//         }
//     }


//     else if ((s + w[k] + w[k+1]) <=m)
//     {
//         sos(s+w[k],k+1,r-w[k]);
//     }






// }


#include<stdio.h>
#include<stdlib.h>

int m=0;
int *w;
int *x;

int main()
{
    int i=0,sum=0,n=0;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    w=(int*)malloc(sizeof(int) *n+1);
    x=(int *)malloc(sizeof(int) * n+1);

    printf("Enter the elements\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
        sum+=w[i];
        x[i]=0;
    }
    printf("Enter the sum to be obtained\n");
    scanf("%d",&m);

    if(sum<m)
    {
        printf("NOT POSSIBLE\n");
        exit(1);
    }

    printf("Possible subsets are\n");
    sos(0,1,sum);
}

void sos(int s,int k,int r)
{
    int i =0;
    x[k] =1;
    if(s+w[k] == m)
    {
        for(i=1;i<=k;i++)
        {
            if(x[k]==1)
            {
                printf("\t%d",w[i]);
            }
        }
    }

    else if((s+w[k]+w[k+1])<m)
    {
        sos(s+w[k+1],k+1,r-w[k]);
    }



 //


     if ((s + r - w[k]) >= m && (s + w[k + 1]) <= m)
    {
        x[k] = 0;
        sos(s, k + 1, r - w[k]);
    }
}