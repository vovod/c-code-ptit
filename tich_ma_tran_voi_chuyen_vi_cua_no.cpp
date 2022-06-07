#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    int dem = 1;
    while (t--)
    {
        int a[105][105];
        int b[105][105];
        int d[105][105];
        int m, n;
        scanf("%d %d", &m, &n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        }
        printf("Test %d:\n", dem);
        dem++;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                d[i][j] = sum;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", d[i][j]);
            }
            printf("\n");
        }
    }
}