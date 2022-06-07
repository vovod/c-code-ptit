#include <stdio.h>

long long a[100005]={0};

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
	    long long n;
	    scanf("%lld",&n);
	    for(int i=0;i<n;i++){
	        scanf("%lld", &a[i]);
	    }
	    long long sum=0;
	    for (int i = 0; i < n - 1; i++)
	    {
	        if (a[i] == a[i+1])
	        {
				sum++;
	        }
	    }
	    printf("%lld\n",sum);
	}
}
