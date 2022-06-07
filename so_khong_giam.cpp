#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n < 10){
			printf("YES\n");
			continue;
		}
		int x = n % 10;
		n = n / 10;
		int y;
		int chot = 0;
		while(n > 0){
			y = n % 10;
			if(y > x){
				chot = 1;
				break;
			}
			x = y;
			n = n / 10;
		}
		if(chot == 1) printf("NO\n");
		else printf("YES\n");
	}
}

