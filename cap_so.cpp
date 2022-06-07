#include<stdio.h>
#include<math.h>
#include<string.h>

int uc(int a, int b){
	while( a * b != 0 ){
		if( a > b ){
			a = a % b;
		}
		else b = b % a;
	}
	return a + b;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(uc(a, b) == uc(c, d)) printf("YES\n");
		else printf("NO\n");
	}
}

