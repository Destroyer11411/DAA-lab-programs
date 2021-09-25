#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, t, j;

    printf("Enter the number of seats in the theater\n");
    scanf("%d", &n);

    srand(time(0));

    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }

    printf("The seats are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nSorting the seats in ascending order\n");

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("The sorted result is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}