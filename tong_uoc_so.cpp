#include<stdio.h>
#include<string.h>
#include<math.h>

int nguyento(int a){
	if( a == 2 || a == 3){
		return 1;		
	}
	if( a % 2 == 0 || a % 3 == 0 || a == 1){
		return 0;
	}
	for( int i = 5; i*i <= a;){
		if( a % i == 0 || a % (i+2) == 0 ) return 0;
		i = i + 6;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	long long sum = 0;

	while(t--){
		int n;
		scanf("%d", &n);
		while(n > 1){
			int p = nhonhat(n);
			n = n / p;
			sum = sum + p;
		}
	}
	printf("%lld", sum);
}
