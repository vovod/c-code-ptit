#include <stdio.h>

//long long sum=1000000007;
long long F(int n)
{
    long long a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    long long i = 3, a;
    while (i <= n)
    {
        a = (a1 + a2);
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    printf("%lld\n",F(n));
    }
}

