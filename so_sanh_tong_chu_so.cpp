#include<stdio.h>
#include<math.h>
#include<string.h>

int tong(int n){
	int a = 0;
	while( n > 0 ){
		a = a+(n%10);
		n = n/10;
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(tong(a) <= tong(b)) printf("%d %d", a, b);
	else printf("%d %d", b, a);
}

