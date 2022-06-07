#include <stdio.h>
int a[100005];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    for(int i=1;i<=n;i++){
	        scanf("%d",&a[i]);
	    }
	    long long sum=0;
	    long long max=0;
	    for(int i=1;i<=n;i++){
	        sum=sum+a[i];
	        if(sum>0){
	            if(sum>max){max=sum;}
	        }
	        else{
	            sum=0;
	        }
	    }
	    printf("%lld\n",max);
	}
}

