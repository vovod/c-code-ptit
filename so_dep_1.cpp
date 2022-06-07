#include<stdio.h>
#include<math.h>
#include<string.h>

int fibo(long long n){
	long long a = 5 * n * n - 4;
	long long b = 5 * n * n + 4;
	if(((double)sqrt(a) == (int)sqrt(a)) || ((double)sqrt(b) == (int)sqrt(b))) return 1;
	return 0;
}

int nguyento(int a){
	if( a == 2 || a == 3 ){
		return 1;
	}
	if( a == 1 || a%2 == 0 || a%3 == 0 ){
		return 0;
	}
	for( int i = 5; i*i <= a; ){
		if( a%i == 0 || a%(i+2) == 0 ) return 0;
		i = i+6;
	}
	return 1;
}

int tong(int n){
	int a = 0;
	while( n > 0 ){
		a = a+(n%10);
		n = n/10;
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int x = a;
		a = b;
		b = x;
	}
	for(int i = a; i <= b; i++){
		if(fibo(tong(i)) == 1 && nguyento(i) == 1) printf("%d ", i);
	}
}

