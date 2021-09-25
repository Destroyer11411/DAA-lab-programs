#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int a[], int l, int h);

void merge_sort(int a[], int m, int l, int h);

int main()
{
    int i, n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    int a[n];

    srand(time(0));

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
    }

    printf("The ID's before sorting are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    merge(a, 0, n-1);

    printf("\nThe ID's after sorting are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void merge(int a[], int l, int h)
{
    if (l < h)
    {
        int m;
        m = (l + h) / 2;
        merge(a, l, m);
        merge(a, m + 1, h);
        merge_sort(a, m, l, h);
    }
}

void merge_sort(int a[], int m, int l, int h)
{
    int i, j, k;
    int b[h + 1];

    i = l, j = m + 1, k = l;

    while ((i <= m) && (j <= h))
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            k++, i++;
        }

        else
        {
            b[k] = a[j];
            k++, j++;
        }
    }

    while (i <= m)
    {
        b[k] = a[i];
        k++, i++;
    }

    while (j <= h)
    {
        b[k] = a[j];
        k++, j++;
    }

    for (k = l; k < h; k++)
    {
        a[k] = b[k];
    }
}