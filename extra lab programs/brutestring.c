#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int c = -1;
int brut_forc(char p[], char t[], int n, int m)
{
    int i, j;
    for (i = 0; i <= n - m; i++)
    {
        j = 0;
        c++;
        while (j < m && t[j] == p[i + j])
        {
            j++;
            c++;
                }

        if (j == m)
        {
            printf("The number of comaprisions made are:%d\n", c);

            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int i, j, n, m;
    char p[100], t[100];
    printf("Enter the main string\n");
    scanf("%s", p);
    n = strlen(p);

    printf("Enter the string to be found\n");
    scanf("%s", t);
    m = strlen(t);

    int b = 0;

    b = brut_forc(p, t, n, m);

    if (b == -1)
    {
        printf("The character was not found\n");
    }

    else
    {
        printf("The requried array was found at the location %d\n", b);
    }
}