#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long u, d, n, s;
    scanf("%lld%lld%lld", &u, &d, &n);
    s = n*u + (n*(n-1))*d/2;
    printf("%lld", s);
    return 0;
}
