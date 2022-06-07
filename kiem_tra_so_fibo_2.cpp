#include <stdio.h>

long long sinhfibo(int n)
{
    long long Fibo[94];
    Fibo[1] = 0;
    Fibo[2] = 1;

    for (int i = 3; i <= 93; i++)
    {
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
    }
    return Fibo[n];
}

int check(long long n)
{
    for (int i = 1; sinhfibo(i) <= n; i++)
    {
        if (sinhfibo(i) == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if(check(n) == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
