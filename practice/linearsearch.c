#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, k;
    clock_t start, end;
    double t;

    printf("enter the number of medicine ID\n");
    scanf("%d", &n);

    int a[n];
    srand(time(0));

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }

    printf("The ID's are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nenter the ID to be found\n");
    scanf("%d", &k);
    start = clock();

    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("The ID %d was found at the location %d\n", k, (i + 1));
            end = clock();
            t = (double)(end - start) / CLOCKS_PER_SEC;
            printf("The time taken for the search is : %f\n", t);
            return 0;
        }
    }

    printf("The ID was not found\n");
}