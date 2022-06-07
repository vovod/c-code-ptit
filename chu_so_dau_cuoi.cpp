#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	int cuoi = n%10;
	while( n > 10 ){
		n = n/10;
	}
	printf("%d %d", n%10, cuoi);
}

