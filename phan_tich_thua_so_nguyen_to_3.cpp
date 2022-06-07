#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		printf("Test %d: ", dem);
		for( int i = 2; i <= n; i++ ){
			int dem2 = 0;
			while( n % i == 0 ){
				dem2++;
				n = n/i;
				if(n % i != 0) printf("%d(%d) ", i, dem2);
			}
			if(n == 1) break;
		}
		dem++;
		printf("\n");
	}
}

