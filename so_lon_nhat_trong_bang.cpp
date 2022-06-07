#include<stdio.h>
#include<math.h>
#include<string.h>
//NHDvovod
int main(){
	int t;
	long long hang = 10000000;
	long long cot = 10000000;
	scanf("%d", &t);
	while(t--){
		long long x, y;
		scanf("%lld%lld", &x, &y);
		if(x < hang) hang = x;
		if(y < cot) cot = y;
	}
	printf("%lld", hang * cot);
}

