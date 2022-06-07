#include<stdio.h>
#include<string.h>
#include<math.h>

int a[10000];

int main(){
	int n;
	scanf("%d", &n);
	int dem = 1;
	if(n == 0) printf("0");
	while(n > 0){
		a[dem] = n % 2;
		dem++;
		n = n / 2;
	}
	for(int i = dem - 1; i >= 1; i--){
		printf("%d", a[i]);
	}
}

