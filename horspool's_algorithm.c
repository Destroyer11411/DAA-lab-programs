// #include <stdio.h>
// #include <string.h>
// #include <conio.h>
// #define MAX 500
// int t[MAX];
// void shifttable(char p[])
// {
//     int i, j, m;
//     m = strlen(p);
//     for (i = 0; i < MAX; i++)
//         t[i] = m;
//     for (j = 0; j < m - 1; j++)
//         t[p[j]] = m - 1 - j;
// }
// int horspool(char src[], char p[])
// {
//     int i, j, k, m, n;
//     n = strlen(src);
//     m = strlen(p);
//     printf("\nLength of text=%d", n);
//     printf("\n Length of pattern=%d", m);
//     i = m - 1;
//     while (i < n)
//     {
//         k = 0;
//         while ((k < m) && (p[m - 1 - k] == src[i - k]))
//             k++;
//         if (k == m)
//             return (i - m + 1);
//         else
//             i += t[src[i]];
//     }
//     return -1;
// }
// void main()
// {
//     char src[100], p[100];
//     int pos;
//     clrscr();
//     printf("Enter the text in which pattern is to be searched:\n");
//     gets(src);
//     printf("Enter the pattern to be searched:\n");
//     gets(p);
//     shifttable(p);
//     pos = horspool(src, p);
//     if (pos >= 0)
//         printf("\n The desired pattern was found starting from position %d", pos + 1);
//     else
//         printf("\n The pattern was not found in the given text\n");
//     getch();
// }







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