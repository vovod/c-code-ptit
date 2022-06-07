#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x = n / 1000;
		n = n % 1000;
		x = x + n / 500;
		n = n % 500;
		x = x + n / 200;
		n = n % 200;
		x = x + n / 100;
		n = n % 100;
		x = x + n / 50;
		n = n % 50;
		x = x + n / 20;
		n = n % 20;
		x = x + n / 10;
		n = n % 10;
		x = x + n / 5;
		n = n % 5;
		x = x + n / 2;
		n = n % 2;
		x = x + n / 1;
		n = n % 1;
		printf("%d\n", x);
	}
}

