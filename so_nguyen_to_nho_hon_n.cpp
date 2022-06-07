#include<stdio.h>
#include<math.h>
#include<string.h>

int nguyento(long long a){
	if( a == 2 || a == 3){
		return 1;		
	}
	if( a % 2 == 0 || a % 3 == 0 || a == 1){
		return 0;
	}
	for( long long i = 5; i*i <= a;){
		if( a % i == 0 || a % (i+2) == 0 ) return 0;
		i = i + 6;
	}
	return 1;
}

int main(){
	long long n;
	scanf("%lld", &n);
	for(long long i = 2; i < n; i++){
		if( nguyento(i) == 1 ) printf("%lld\n", i);
	}
}

