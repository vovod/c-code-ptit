#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int n = 0;
	int x;
	if( a > b ){
		x = a;
		a = b;
		b = x;
	}
	for( int i = a; i <= b; i++){
		n = n+i;
	}
	printf("%d", n);
}

