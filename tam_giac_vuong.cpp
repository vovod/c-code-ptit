#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool bs(long long a[], int n, long long x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return true;
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return false;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long a[n];
        long long h;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            a[i] = a[i] * a[i];
        }
        int ktra = 0;
        long long x;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    x = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = x;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                h = a[i] + a[j];

                if (bs(a, n, h))
                {
                    ktra = 1;
                    break;
                }
            }
            if (ktra == 1)
                break;
        }
        if (ktra == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
