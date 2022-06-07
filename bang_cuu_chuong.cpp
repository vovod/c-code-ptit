#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	long long n;
	scanf("%lld", &n);
	for(int i = 1; i <= 10; i++){
		printf("%lld ", n*i);
	}
}

