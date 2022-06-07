#include<stdio.h>
#include<string.h>
#include<math.h>

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
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld%lld", &a, &b);
		long long d;
		if(a > b){
			d = a;
			a = b;
			b = d;
		}
		long long x = sqrt(a);
		if(x == 1) x++;
		long long y = sqrt(b);
		int dem = 0;
		for(long long i = x; i <= y; i++){
			if(nguyento(i) == 1) dem++;
		}
		printf("%lld\n", dem);
	}
}

