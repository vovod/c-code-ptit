#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a = n%10;
	n = n/10;
	while( n > 0 ){
		a = a*(n%10);
		n = n/10;
	}
	printf("%d", a);
}

