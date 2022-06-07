#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a = n%10;
		while( n >= 10 ){
			n = n/10;
		}
		int b = n%10;
		if( a == b ){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}

