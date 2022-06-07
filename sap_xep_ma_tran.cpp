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
        int m, n;
        scanf("%d %d", &m, &n);
        int a[105][105];
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Test %d:\n", dem);
        dem++;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int x = i; x <= m; x++)
                {
                    for (int y = j; y <= n; y++)
                    {
                        if (a[i][j] > a[x][y])
                        {
                            int tmp = a[i][j];
                            a[i][j] = a[x][y];
                            a[x][y] = tmp;
                        }
                    }
                }
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}