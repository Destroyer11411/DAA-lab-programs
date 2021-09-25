// #include<stdio.h>

// void swap(int *a,int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int partition(int a[],int l,int h)
// {
//     int p = a[h];

//     int i = (l-1);

//     for(int j = l;j<h;j++)
//     {
//         if(a[j] <= p)
//         {
//             i++;
//             swap(&a[i],&a[j]);
//         }
//     }

//     swap(&a[i+1],&a[h]);

//     return(i+1);

// }

// void quicksort(int a[],int l,int h)
// {
//     if(l<h)
//     {
//         int p =partition(a,l,h);

//         quicksort(a,l,p-1);

//         quicksort(a,p+1,h);
//     }
// }

// int main()
// {
//     int n,i;
//     printf("Enter the number of array elements\n");
//     scanf("%d",&n);

//     int d[n];

//     printf("Enter the number into the array\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&d[i]);
//     }

//     printf("The array before sorting\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d",d[i]);
//     }

//     quicksort(d,0,n-1);

//     printf("The array after sorting\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",d[i]);
//     }

// }

#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int l, int h)
{
    int j, i;
    int p = a[h];
    i = l - 1;

    for (j = l; j < h; j++)
    {
        if (a[j] <= p)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[h]);

    return (i + 1);
}

void quick(int a[], int l, int h)
{
    if (l < h)
    {
        int piv = partition(a, l, h);

        quick(a, l, piv - 1);

        quick(a, piv + 1, h);
    }
}

int main()
{
    int i, n;

    printf("Enter the number of elements\n");
    scanf("%d", &n);

    printf("Enter the elements into the array\n");
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    quick(a, 0, n - 1);

    printf("\nAfter sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}