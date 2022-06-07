#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n % 2 == 0){
			printf("NO\n");
			continue;
		}
		int chan = 0;
		int le = 0;
		while(n > 0){
			if((n % 10) % 2 == 0) chan++;
			else le++;
			n = n / 10;
		}
		if(chan < le) printf("YES\n");
		else printf("NO\n");
	}
}

