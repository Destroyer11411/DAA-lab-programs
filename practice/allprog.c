//Sum of subsets//

// #include <stdio.h>
// #include <stdlib.h>
// int m = 0;
// int *w;
// int *x;

// void sos(int s, int k, int r)
// {
//     int i;
//     x[k] = 1;

//     if (s + w[k] == m)
//     {
//         for (i = 1; i <= k; i++)
//         {
//             if (x[i] == 1)
//             {
//                 printf("\t%d", w[i]);
//             }
//         }
//     }

//     else if ((s + w[k] + w[k + 1]) < m)
//     {
//         sos(s + w[k + 1], k + 1, r - w[k]);
//     }
// }

// int main()
// {
//     int i = 0, n = 0, s = 0;

//     printf("Enter the number of elements\n");
//     scanf("%d", &n);

//     w = (int *)malloc(sizeof(int) * n + 1);
//     x = (int *)malloc(sizeof(int) * n + 1);

//     printf("Enter the number into the array\n");
//     for (i = 1; i <= n; i++)
//     {
//         scanf("%d", &w[i]);
//         s += w[i];
//         x[i] = 0;
//     }

//     printf("Enter the sum to be obtained\n");
//     scanf("%d", &m);

//     if (s < m)
//     {
//         printf("NOT POSSIBLE\n");
//         exit(1);
//     }

//     printf("Possible subsets\n");
//     sos(0, 1, s);
// }

// #include<stdio.h>
// #include<stdlib.h>

// int m=0;
// int *w;
// int *x;

// void sos(int s,int k,int r)
// {
//     int i=0;
//     x[k]=1;

//     if(s+w[k] == m)
//     {
//         for(i=1;i<=k;i++)
//         {
//             if(x[i] == 1)
//             {
//                 printf("\t%d",w[i]);
//             }
//         }
//     }

//     else if((s+w[k]+w[k+1])<m)
//     {
//         sos(s+w[k+1],k+1,r-w[k]);
//     }
// }

// int main()
// {
//     int i=0,s=0,n=0;

//     printf("Enter the number of elements\n");
//     scanf("%d",&n);

//     w =(int*)malloc(sizeof(int)* n+1);
//     x = (int*)malloc(sizeof(int)*n+1);

//     printf("Enter the elements\n");
//     for(i=1;i<n;i++)
//     {
//         scanf("%d",&w[i]);
//         s+=w[i];
//         x[i]=0;
//     }

//     printf("Enter the number which you want to find the sum of\n");
//     scanf("%d",&m);

//     if(s<m)
//     {
//         printf("NOT POSSIBLE\n");
//         exit(1);
//     }

//     printf("Possible subsets\n");
//     sos(0,1,s);

// }

// HEAP SORT //

// #include <stdio.h>
// int temp;

// void heapify(int resume[], int n, int i)
// {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n && resume[left] > resume[largest])
//     {
//         largest = left;
//     }

//     if (right < n && resume[right] > resume[largest])
//     {
//         largest = right;
//     }

//     if (largest != i)
//     {
//         temp = resume[i];
//         resume[i] = resume[largest];
//         resume[largest] = temp;
//         heapify(resume, n, largest);
//     }
// }

// void heapsort(int resume[], int n)
// {
//     int i;
//     for (i = n / 2 - 1; i >= 0; i--)
//     {
//         heapify(resume, n, i);
//     }

//     for (i = n - 1; i >= 0; i--)
//     {
//         temp = resume[0];
//         resume[0] = resume[i];
//         resume[i] = temp;
//         heapify(resume, i, 0);
//     }
// }

// int main()
// {
//     int i, n;
//     printf("Enter the number of elements\n");
//     scanf("%d", &n);

//     int resume[n];

//     printf("enter the elements into the elements\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &resume[i]);
//     }

//     printf("The elements before sorting\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", resume[i]);
//     }

//     heapsort(resume, n);

//     printf("\nThe elemets after sorting\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", resume[i]);
//     }
// }

// Horsepool Algorithm//

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define SIZE 250
// int table[SIZE];

// void shifttable(char p[])
// {
//     int i;
//     int m = strlen(p);

//     for (i = 0; i < SIZE; i++)
//     {
//         table[i] = m;
//     }
//     for (i = 0; i < m - 1; i++)
//     {
//         table[p[i]] = m - 1 - i;
//     }
// }

// int horsepool(char s[],char p[])
// {
//     int i, j, k, m, n;
//     m = strlen(p);
//     n = strlen(s);
//     i = m - 1;

//     while (i < n)
//     {
//         k = 0;
//         while (k < m && p[m - 1 - k] == s[i - k])
//         {
//             k++;
//         }

//         if (k == m)
//         {
//             return (i - m + 1);
//         }

//         else
//         {
//             i += table[s[i]];
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int pos;
//     char string[100], pattern[100];

//     printf("Enter the main string\n");
//     gets(string);

//     printf("Enter the pattern to be found\n");
//     gets(pattern);

//     shifttable(pattern);

//     pos = horsepool(string, pattern);

//     if (pos >= 0)
//     {
//         printf("The pattern was found at the location:%d\n", pos);
//     }

//     else
//     {
//         printf("NOT FOUND\n");
//     }
// }















// Programs in series //






// 1.Linear search //

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int i,n,k;
//     clock_t st,en;
//     double t;

//     printf("Enter the number of ID's\n");
//     scanf("%d",&n);

//     int a[n];
//     srand(time(0));

//     for(i=0;i<n;i++)
//     {
//         a[i] = rand()%100;
//     }

//     printf("The ID's are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     printf("Enter the ID to be found\n");
//     scanf("%d",&k);

//     st = clock();
//     for(i=0;i<n;i++)
//     {
//         if(a[i] == k)
//         {
//             printf("The ID was found at the location:%d\n",i+1);
//             en = clock();
//             t= (double)(en-st)/CLOCKS_PER_SEC;
//             printf("The time take for thw search is:%f\n",t);
//             return 1;
//         }
//     }

//     printf("The ID was not found\n");

// }

















// 2.Bubble sort //

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// void swap(int *a,int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;

// }

// int main()
// {
//     int i,j,n;
//     printf("Enter the number of seats in the theater\n");
//     scanf("%d",&n);

//     int a[n];
//     srand(time(0));

//     for(i=0;i<n;i++)
//     {
//         a[i] = rand()%100;

//     }

//     printf("Before sorting\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 swap(&a[j],&a[j+1]);
//             }
//         }
//     }

//     printf("\nThe sorted array is\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

// }















// 3.Traveling salesman problem //

// #include <stdio.h>
// #include <stdlib.h>
// int a[100][100], visited[100], n, cost = 0;

// void mincost(int city)
// {
//     int i, ncity;
//     visited[city] = 1;
//     printf("\t%d-->", city + 1);
//     ncity = least(city);

//     if (ncity == 999)
//     {
//         ncity = 0;
//         printf("\t%d-->", ncity + 1);
//         cost += a[city][ncity];
//         return;
//     }

//     mincost(ncity);
// }

// int least(int c)
// {
//     int nc = 999, min = 999;
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (a[c][i] != 0 && visited[i] == 0)
//         {
//             if (a[c][i] < min)
//             {
//                 min = a[c][i];
//                 nc = i;
//             }
//         }
//     }

//     if (min != 999)
//     {
//         cost += min;

//     }
//      return nc;
// }

// int main()
// {
//     int i, j;
//     printf("Enter the number of cities\n");
//     scanf("%d", &n);

//     printf("Enter the cost matrix\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//             visited[i] = 0;
//         }
//     }

//     printf("The cost matrix is\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }

//    printf("The path is\n");

//     mincost(0);
// }
















// 4.Binary Search //

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int i, n, k;

//     printf("Enter the number of ID's\n");
//     scanf("%d", &n);
//     int a[n];

//     srand(time(0));

//     for (i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100;
//     }

//     printf("The ID's are\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }

//     printf("\nEnter the key to be found\n");
//     scanf("%d", &k);

//     int l = 0;
//     int r = n - 1;
//     int m;
//     while (l <= r)
//     {
//         m = l + r / 2;

//         if (k <= a[m])
//         {
//             r = m - 1;
//         }

//         if (k >= a[m])
//         {
//             l = m + 1;
//         }

//         if (k == a[m])
//         {
//             printf("The key %d was found at the location:%d",k, m);
//             return 0;
//         }
//     }
// }














// 5.Insertion sort //

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// void isort(int a[],int n)
// {
//     int i,j,k;
//     for(i=0;i<n;i++)
//     {
//         j=i-1;
//         k=a[i];

//         while(j>=0 && a[j] > k)
//         {
//             a[j+1] = a[j];
//             j--;
//         }

//         a[j+1] = k;

//     }
// }

// int main()
// {
//     int i,n;

//     printf("Enter the number of ID's\n");
//     scanf("%d",&n);

//     int a[n];

//     srand(time(0));

//     for(i=0;i<n;i++)
//     {
//         a[i] = rand()%1000;
//     }

//     printf("The ID's are \n");
//     for(i=0;i<n;i++)

//     {
//         printf("%d\t",a[i]);

//     }

//     isort(a,n);
//     printf("\n");

//     printf("after sorting\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

// }















// 6.Merge Sort //

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void mergesort(int a[], int l, int m, int h)
// {
//     int i, j, k;
//     int b[h + 1];
//     i = l, j = m + 1, k = l;

//     while ((i <= m) && (j <= h))
//     {
//         if (a[i] <= a[j])
//         {
//             b[k] = a[i];
//             k++, i++;
//         }

//         else
//         {
//             b[k] = a[j];
//             k++, j++;
//         }
//     }
//     while (i <= m)
//     {
//         b[k] = a[i];
//         k++, i++;
//     }

//     while (j <= h)
//     {
//         b[k] = a[i];
//         k++, j++;
//     }

//     for (k = l; k < h; k++)
//     {
//         a[k] = b[k];
//     }
// }

// void merge(int a[], int l, int h)
// {
//     int m;
//     if (l < h)
//     {
//         m = (l + h) / 2;

//         merge(a, l, m);
//         merge(a, m + 1, h);
//         mergesort(a, l, m, h);
//     }
// }

// int main()
// {
//     int i, n;
//     printf("Enter the number of entries\n");
//     scanf("%d", &n);

//     int a[n];

//     srand(time(0));

//     for (i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100;
//     }

//     printf("The entries are\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }

//     merge(a, 0, n - 1);

//     printf("\nAfter the sorting\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }
// }


















// Quick sort //

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int partition(int a[], int l, int h)
// {
//     int j, i;
//     int p = a[h];
//     i = l - 1;

//     for (j = l; j < h; j++)
//     {
//         if (a[j] <= p)
//         {
//             i++;
//             swap(&a[i], &a[j]);
//         }
//     }

//     swap(&a[i + 1], &a[h]);

//     return (i + 1);
// }

// void quick(int a[], int l, int h)
// {
//     if (l < h)
//     {
//         int piv = partition(a, l, h);

//         quick(a, l, piv - 1);

//         quick(a, piv + 1, h);
//     }
// }

// int main()
// {
//     int i, n;

//     printf("Enter the number of elements\n");
//     scanf("%d", &n);

//     printf("Enter the elements into the array\n");
//     int a[n];

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Before sorting\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }

//     quick(a, 0, n - 1);

//     printf("\nAfter sorting\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", a[i]);
//     }
// }