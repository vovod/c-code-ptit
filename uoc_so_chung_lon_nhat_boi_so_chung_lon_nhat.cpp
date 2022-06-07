#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long x = a * b;
	while( a * b != 0 ){
		if( a > b ){
			a = a % b;
		}
		else b = b % a;
	}
	printf("%lld\n%lld", a + b, x / (a + b));
	
}

