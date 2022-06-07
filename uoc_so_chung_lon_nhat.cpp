#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		while( a*b != 0 ){
			if( a > b ){
				a = a%b;
			}
			else b = b%a;
		}
		printf("%d\n", a+b);
	}
}

