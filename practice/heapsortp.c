#include <stdio.h>
#include <stdlib.h>
int temp;

int main()
{
    int n, i;
    printf("Enter the number of entries\n");
    scanf("%d", &n);
    int resume[n];

    printf("Enter the numbers into the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &resume[i]);
    }
    printf("The list before the sorting is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", resume[i]);
    }

    heapsort(resume, n);

    printf("\n The list after the sorting is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", resume[i]);
    }
}

void heapsort(int resumr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        heapify(resumr, n, i);
    }

    for (i = n - 1; i >= 0; i--)
    {
        int temp;
        temp = resumr[0];
        resumr[0] = resumr[i];
        resumr[i] = temp;
        heapify(resumr, i, 0);
    }
}

heapify(int resume[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && resume[left] > resume[largest])
    {
        largest = left;
    }

    if (right < n && resume[right] > resume[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = resume[i];
        resume[i] = resume[largest];
        resume[largest] = temp;
        heapify(resume, n, largest);
    }
}