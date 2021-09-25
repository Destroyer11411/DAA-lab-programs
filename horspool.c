
#include <stdio.h>
#include <string.h>
#define MAX 256
int table[MAX];
int count = 0;
void ShiftTable(char p[])
{
    int i, j, m;
    m = strlen(p);
    for (i = 0; i < MAX; i++)
    {
        table[i] = m;
    }
    for (j = 0; j < m - 1; j++)
    {
        table[p[j]] = m - 1 - j;
    }
}
int Horspool(char string[], char pattern[])
{
    int i, j, k, m, n;
    n = strlen(string);
    m = strlen(pattern);
    i = m - 1;
    while (i < n)
    {
        k = 0;
        while (k < m && pattern[m - 1 - k] == string[i - k])
        {
            k++;
            count++;
        }
        if (k == m)
        {
            return (i - m + 1);
        }
        else
        {
            i += table[string[i]];
        }
    }
    return -1;
}
void main()
{
    char string[100], pattern[100];
    int pos;
    printf("Enter the main DNA sequence:\n");
    gets(string);
    printf("Enter the DNA pattern to be searched:\n");
    gets(pattern);
    ShiftTable(pattern);
    pos = Horspool(string, pattern);
    if (pos >= 0)
    {
        printf("DNA Pattern fount at position %d\n", pos);
    }
    else
    {
        printf("DNA Pattern not found\n");
    }
    printf("Number of comparisons is %d\n", count);
}