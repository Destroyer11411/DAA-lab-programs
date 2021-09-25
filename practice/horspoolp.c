#include <stdio.h>
#include <string.h>

#define SIZE 250
int table[SIZE];

void shifttable(char p[]);
int horsepool(char s[], char p[]);

int main()
{
    char string[100], pattern[100];
    int pos;

    printf("Enter the main string\n");
    gets(string);

    printf("Enter the string to be found\n");
    gets(pattern);

    shifttable(pattern);

    pos = horsepool(string, pattern);

    if (pos >= 0)
    {
        printf("The string was found at the location %d\n", pos);

    }

    else
    {
        printf("The string was not found\n");
    }

    
}

void shifttable(char p[])
{
    int i, m;
    m = strlen(p);

    for (i = 0; i < SIZE; i++)
    {
        table[i] = m;
    }

    for (i = 0; i < m - 1; i++)
    {
        table[p[i]] = m - 1 - i;
    }
}

int horsepool(char s[], char p[])
{
    int i, j, k, m, n;
    m = strlen(p);
    n = strlen(s);
    i = m - 1;

    while (i < n)
    {
        k = 0;
        while (k < m && p[m - 1 - k] == s[i - k])
        {
            k++;
        }

        if (k == m)
        {   

            return (i - m +1);
        }

        else
        {
            i += table[s[i]];
        }
    }
    return -1;
}
