#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld",  &n);
		long long x = log10(n) + 1;
		int dem = 0;
		long long m = n;
		while(m > 0){
			if(m % 10 != 1 && m % 10 != 0 && m % 10 != 8 && m % 10 != 9) dem++;
			m = m / 10;
		}
		if(dem != 0 || n == 0){
			printf("INVALID\n");
			continue;
		}
		dem = 0;
		while(x >= 0){
			if((n / (long long)pow(10, x) == 0 || n / (long long)pow(10, x) == 8 || n / (long long)pow(10, x) == 9) && dem != 0){
				printf("0");
			}
			if(n / (long long)pow(10, x) == 1){
				printf("1");
				dem++;
			}
			n = n % (long long)pow(10, x);
			x--;
		}
		if(dem == 0) printf("INVALID\n");
		else printf("\n");
	}
}

