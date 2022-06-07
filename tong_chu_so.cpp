#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a = 0;
		while( n > 0 ){
			a = a+(n%10);
			n = n/10;
		}
		printf("%d\n", a);
	}
}

