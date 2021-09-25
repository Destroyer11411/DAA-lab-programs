// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int n,i,key;
//     printf("Enter the number of medecine type\n");
//     scanf("%d",&n);
//     int a[n];
//     clock_t start,end;
//     double time;

//     for(i=0;i<n;i++)
//     {
//         a[i]=rand()%100;
//     }

//     printf("The Id's available at us are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     printf("\nenter the medicine ID to check\n");
//     scanf("%d",&key);
//     start=clock();
//     printf("the medicine which needs to be searched is %d\n",key);

//     for(i=0;i<n;i++)
//     {
//         if(a[i]==key)
//         {
//             printf("Found the medicine at the location %d\n",i+1);
//             end=clock();
//             break;
//         }

//     }

//     time=(double)(end-start)/CLOCKS_PER_SEC;
//     printf("the time took to complete the algorithm is %d\n",time);

// }


//cineplex//

// #include<stdio.h>
// #include<time.h>
// #include<stdio.h>

// int main()
// {
//     int i,j,n,t;
//     clock_t start,end;
//     long long  time;

//     printf("welcome to the cineplex\n");
//     printf("Please enter the number of remaining seats\n");
//     scanf("%d",&n);

//     int a[n];
//     start=clock();

//     for(i=0;i<n;i++)
//     {
//         a[i]=rand()%100;
//     }

//     printf("the available seats are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 t=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;
//             }
//         }
//     }

//     printf("\nThe seats are arranged in proper order\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     end=clock();

//     time=(long long)(end-start)/CLOCKS_PER_SEC;
//     printf("\nThe time take for the algorithm to find out the no of seats and to arrange them in an order is %d\n",time);
// }


// //Binary search
// //Digi shop problem

// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int binarysearch (int a[],int n,int key);

// int main()
// {
//     int n,key,i;
//     printf("Enter the number of elements\n");
//     scanf("%d",&n);
//     int a[n];
//     // srand(time(0));
//     for(i=0;i<n;i++)
//     {
//         a[i]=rand()%100;
//     }

//     printf("The elements available are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     printf("\nEnter the key to be found\n");
//     scanf("%d",&key);

//      binarysearch (a,n,key);
//     // printf("The returned value is %d\n",ans);


//     // if (ans==-1)
//     // {
//     //     printf("Product not found\n");
//     // }

//     // else{
//     //     printf("Found the key %d at the location %d\n",key,ans);
//     // }
// }


// int binarysearch (int a[], int n, int key)
// {
//     clock_t start, end;
//     double time;
//     int i;
//     int m=0,l,r;
//     l=0;
//     r=n-1;

//     start = clock();

//     while(l<=r)
//     {
//         m=(l+r)/2;

//         if(key<a[m])
//         {
//             r=m-1;
//         }

//         else if (key>a[m])
//         {
//             l=m+1;
//         }

//         else if (key=a[m])
//         {
//             // break;
//             // return m;
//             printf("found the key %d at the location %d\n",key,m);
//             end = clock();
//             time = (double) (end - start)/CLOCKS_PER_SEC;
//             printf("The time takes for the binary search algorithm to search the key is=%d\n",time);
            
//             break;
            
//         }

//     }
// }


// //Insertion sort//

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int i,j,key,n;

//     printf("Enter the number of elements\n");
//     scanf("%d",&n);
//     int a[n];
//     srand(time(0));

//     for(i=0;i<n;i++)
//     {
//         a[i]=rand()%100;
//     }

//     printf("The array available is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");

//     printf("Entering into the insertion sort......\n");

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

//     printf("The sorted array is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
    
// }