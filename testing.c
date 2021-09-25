//  

// // int main()
// // {
// //     int a[] = {12,54,65,7,23};

// //     int i,key,j;

// //     for(i=1;i<5;i++)
// //     {
// //         key = a[i];
// //         j=i-1;

// //         while(j>=0 && a[j]>key)
// //         {
// //             a[j+1]=a[j];
// //             j--;
// //         }
// //         a[j+1] = key;

        
       
// //     }
// //     printf("The sorted array is \n");
// //      for(i=0;i<5;i++)
// //         {
// //             printf("%d\t",a[i]);
// //         }
// // }

// // Trying it with the random number generation//

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int i,j,key,n;
//     printf("Enter the value of n\n");
//     scanf("%d",&n);
//     int a[n];
//     // srand(time(0));
//     for(i=0;i<n;i++)
//     {
//      a[i]=rand()%1000;   
//     }

//     printf("the array is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);

//     }
//     printf("This is the start of the insertion sort\n");

//     for(i=1;i<n;i++)
//     {
//         key = a[i];
//         j=i-1;

//         while(j>0 && a[j]>key)
//         {
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=key;
//     }

//     printf("The array after the insertion sort is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int n,key,i;
//     clock_t  start,end;
//     double d;
//     printf("Enter the number of medicines id\n");
//     scanf("%d",&n);

//     int a[n];

//     srand(time(0));

//     for(i=0;i<n;i++)
//     {
//         a[i] = rand()%100;
//     }

//     printf("The medicines id available are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");

//     printf("Enter the key to be searched in\n");
//     scanf("%d",&key);
//     start = clock();

//     for(i=0;i<n;i++)
//     {
//         if(a[i]==key)
//         {
//             printf("The key %d was found at the locaion %d\n",key,i+1);
//              end = clock();

//      d= (double)(end - start)/CLOCKS_PER_SEC;
//      printf("The total time takes for the algorithm to search  the element is %f\n",d); 
            
//             return 0;
            
//         }
//     }
   

//     printf("The key was not found\n");

       
// }


// bubble sort//

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int i,j,t,n;
//     clock_t start,end;
//     double d;
//     printf("Please enter the number of seats remaining\n");
//     scanf("%d",&n);

//     int a[n];

//     start  = clock();

//     srand(time(0));


//     for(i=0;i<n;i++)
//     {
//         a[i] = rand()%100;
//     }

//     printf("the available seats are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }


//     printf("Arranging them in assecding order\n");

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if (a[j] > a[j+1])
//             {
//                 t=a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = t;
//             }

//         }
//     }

//     end = clock();


//     printf("The seates arranged in the order\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     d= (double)(end-start)/CLOCKS_PER_SEC;
//     printf("\n");
//     printf("The time taken by the algorithm to sort the numbers is %f\n",d);


// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int m,l,r,key,n,i;
//     clock_t start,end;
//     double d;
//     printf("Enter th enumber of numbers in the array\n");
//     scanf("%d",&n);

//     int a[n];
//     srand(time(0));
//     start = clock();
    
//     for(i=0;i<n;i++)
//     {
//         a[i]=rand()%100;
//     }

//     printf("The numers in the array are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
//     printf("Enter the number to be searched\n");
//     scanf("%d",&key);
//     l=0;
//     r=n-1;

//     while(l<=r)
//     {
//         m=l+r/2;
//         if(key<a[m])
//         {
//             r=m-1;
//         }
//         else if(key>a[m])
//         {
//             l=m+1;
//         }

//         else if(key==a[m])
//         {
//             printf("The key %d was found at the location %d\n",key,m);
            
           
//             break;
            
//         }
//     }

//      end = clock();
//             d= (double)(end - start)/CLOCKS_PER_SEC;
//             printf("The time taken by the algorithm to sort is %d\n",d);
//             return 1;


// }

//Insertion sort//

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int insertion_sort (int a[],int n);

// int main()
// {
//     int i,j,key,n;
//     printf("Enter the number of elements in the array\n");
//     scanf("%d",&n);

//     int a[n];

//     srand(time(0));

//     for(i=0;i<n;i++)
//     {
//         a[i]=rand()%100;
//     }

//     printf("The array is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     printf("Entering into the insertion sort\n");

//     // insertion_sort(a,n);

//     for(i=1;i<n;i++)
//     {
//         key = a[i];
//         j=i-1;


//         while(j>0 && a[j]>key)
//         {
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = key;
//     }
//     printf("The sorted array is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }

// int insertion_sort(int a[],int n)
// {
//     int i,j,key;
//     for(i=1;i<n;i++)
//     {
//         key = a[i];
//         j=i-1;

//         while (j>0 && a[j]>key)
//         {
//             a[j+1] = j;
//             j=j-1;
//         }

//         a[j+1] = key;


//     }

//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// // int mincost(int city);
// // int least(int c);

// int a[10][10],visited[10],n,cost=0;

// int main()
// {
//     int i,j;
//     printf("Enter the number of cities\n");
//     scanf("%d",&n);

//     printf("Enter the cost matrix\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//             visited[i]=0;
//         }
//     }

//     printf("The entered cost matrix is\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
    
//    mincost(0);
//     printf("the minimum cost is=%d\n",cost);


// }

// mincost(int city)
// {
//     int i,ncity;
//     visited[city] = 1;
//     printf("%d---->",city+1);
//     ncity = least(city);

//     if(ncity == 999)
//     {
//         ncity = 0;
//         printf("%d",ncity+1);
//         cost += a[city][ncity];
//         return;
        
//     }
//     mincost(ncity);
// }

// int least(int c)
// {
//     int min=999;
//     int i,nc=999;

//     for(i=0;i<n;i++)
//     {

//         if((a[c][i]!=0) && (visited[i]==0))
//         if (a[c][i]<min)
//         {
//             min = a[c][i];
//             nc=i;
//         }
        
//     }

//     if(min!=999)
//     cost +=min;
// return nc;
// }




#include<stdio.h>
#include<stdlib.h>
int a[10][10];
int visited[10];
int n;
int cost=0;

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

    printf("The path is\n");
    mincost(0);
    printf("\nThe cost of the trip is %d",cost);
    

}


int mincost(int city)
{
    int ncity,i;
    visited[city] = 1;
    printf("%d--->",city);
    ncity = least(city);

    if(ncity==999)
    {
        ncity = 0;
        printf("%d",city+1);
        cost += a[city][ncity];
        return;
    }

    mincost(ncity);
}


int least(int c)
{
    int i,min = 999;
    int nc=999;

    for(i=0;i<n;i++)
    {
        if((a[c][i]!=0) && visited[i]==0)
        if ((a[c][i]<min))
        {
            min = a[c][i];
            nc=i;
        }
    }

    if(min!=999)
    cost +=min;
return nc;
}