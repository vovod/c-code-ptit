#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	long long sum = 0;
	while(t--){
		int n;
		scanf("%d", &n);
		for( int i = 2; i <= n; i++ ){
			while( n % i == 0 ){
				n = n/i;
				sum = sum + i;
			}
			if(n == 1) break;
		}
	}
	printf("%lld", sum);
}

