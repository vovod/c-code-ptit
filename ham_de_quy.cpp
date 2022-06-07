#include<stdio.h>
#include<string.h>
#include<math.h>

int gcd(int a, int b){
	if(a * b == 0) return a + b;
	if(a > b) gcd(a % b, b);
	else gcd(a, b % a);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a, b));
	}
}

