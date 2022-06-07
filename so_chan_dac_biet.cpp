#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int dem = 0;
		while(n > 0){
			if(n % 2 != 0){
				dem++;
				break;
			}
			n = n / 10;
		}
		if(dem == 0) printf("YES\n");
		else printf("NO\n");
	}
}

