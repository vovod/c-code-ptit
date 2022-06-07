#include <stdio.h>
#include <math.h>
long long snt(long long n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
int main()
{
	int t;
	scanf("%d", &t);
	long long sum = 0;	
	while(t--){
	    long long n;
		scanf("%lld", &n);
	    while (n > 1)
	    {
	        sum += snt(n);
	        n /= snt(n);
	    }
	}
	printf("%lld", sum);
}
