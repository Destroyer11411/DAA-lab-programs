
// Extra lab programs //

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int nosp = 0, cmp = 0;
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    nosp++;
}

int main()
{
    int i, j, n, min = 0, t;

    printf("Enter the number of arrays array\n ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The entered array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    //selection sort//

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
                cmp++;

                
            }
        }
        swap(&a[min], &a[i]);
    }
    printf("\n");
    printf("The sorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("The number of comparisions are:%d\n", cmp);

    printf("The number of swaps are: %d\n", nosp);
}