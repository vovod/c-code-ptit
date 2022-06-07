#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int cuoi = n%10;
	int x = n;
	while( x>=10 ){
		x = x/10;
	}
	int dau = x;
	if( cuoi != 0 ) printf("%d", cuoi);
	int s = pow(10, (int)log10(n)-1);
	n = n/10;
	n = n%s;
	if( n != 0 ) printf("%d", n);
	printf("%d", dau);
}

