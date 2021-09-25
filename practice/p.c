// #include<stdio.h>
// #include<stdlib.h>

// void isort(int a[],int n)
// {
//     int i,j,k;
//     for(i=0;i<n;i++)
//     {
//         k=a[i];
//         j=i-1;
//         while (j>=0 && a[j]>k)
//         {
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] =k;
        
//     }
// }


// int main()
// {
//     int a[5] = {3,5,2,6,7};
//     int n = 5;

//     isort(a,n);

//     for(int i =0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }



// #include<stdio.h>
// // void swap(int *a,int *b)
// // {
// //     int t = *a,
// //     *a = *b;
// //     *b =t;

// // }

// void swap(int *a,int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;

// }


// void heapify(int resume[],int n,int i)
// {
//     int largest = i;
//     int left = 2*i+1;
//     int right = 2*i+2;

//     if(left<n && resume[left] > resume[largest])
//     {
//         largest  = left;
//     }

//     if(right< n && resume[right]>resume[largest])
//     {
//         largest = right;
//     }


//     if(largest != i)
//     {
//         swap(&resume[i],&resume[largest]);
//         heapify(resume,n,largest);
//     }


// }


// void heapsort(int resume[],int n)
// {
//     int i;
//     for(i=n/2-1;i>=0;i--)
//     {
//         heapify(resume,n,i);
//     }

//     for(i=n-1;i>=0;i--)
//     {
//         swap(&resume[0],&resume[i]);
//         heapify(resume,i,0);
//     }
// }


// int main()
// {
//     int i,n;
//     printf("Enter the number of resumes\n");
//     scanf("%d",&n);


// int resume[n];
//     printf("Enter the number into the array\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&resume[i]);
//     }

//     printf("The list before sorting\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",resume[i]);

//     }

//     heapsort(resume,n);

//     printf("\nThe list after the sort is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",resume[i]);
//     }





// }






#include<stdio.h>
void swap (int *a,int *b)
{
    int t;
    t=*a;
    *a = *b;
    *b = t;
}

void heapify(int resume[],int n,int i)
{
    int largest  = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && resume[left] > resume[largest])
    {
        largest =left;
    }

    if(right<n && resume[right] > resume[largest])
    {
        largest = right;
    }


    if(largest!=i)
    {
        swap(&resume[i],&resume[largest]);
        heapify(resume,n,largest);
    }




}


void heapsort( int resume[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
    {
        heapify(resume,n,i);
    }

    for(i=n-1;i>=0;i--)
    {
        swap(&resume[0],&resume[i]);
        heapify(resume,i,0);
    }
    
}

int main()
{
    int i,n;
    printf("Enter the numbner of resumes\n");
    scanf("%d",&n);

    int resume[n];

    printf("Enter the details into the array\n");
    scanf("%d",&resume[i]);

    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",resume[i]);
    }

    heapsort(resume,n);


    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",resume[i]);
    }
}