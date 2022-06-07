#include<stdio.h>
#include<string.h>
#include<math.h>

long long min( long long n){
	long long a;
	long long x;
	long long s = pow(10, (int)log10(n));
	a = n / s;
	n = n % s;
	s = s / 10;
	if(a == 6) a = 5;
	while(s >= 1){
		x = n / s;
		if(x == 6) x = 5;
		a = a * 10 + x;
		n = n % s;
		s = s / 10;
	}
	return a;
}

long long max( long long n){
	long long a;
	long long x;
	long long s = pow(10, (int)log10(n));
	a = n / s;
	n = n % s;
	s = s / 10;
	if(a == 5) a = 6;
	while(s >= 1){
		x = n / s;
		if(x == 5) x = 6;
		a = a * 10 + x;
		n = n % s;
		s = s / 10;
	}
	return a;
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", min(a) + min(b), max(a) + max(b));
	}
}

