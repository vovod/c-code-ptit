#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		for( int i = 2; i <= n; i++ ){
			int dem2 = 0;
			while( n % i == 0 ){
				dem2++;
				n = n/i;
				if(n % i != 0) printf("%d^%d", i, dem2);
			}
			if(n == 1) break;
			if(dem2 != 0) printf(" * ");
		}
		printf("\n");
	}
}

