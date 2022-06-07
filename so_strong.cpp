#include<stdio.h>
#include<math.h>
#include<string.h>

int giaithua(int a){
	int x = 1;
	for(int i = 1; i <= a; i++){
		x = x*i;
	}
	return x;
}

int main(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	int gan = n;
	while( n > 0 ){
		sum = sum + giaithua(n%10);
		n = n/10;
	}
	if( gan == sum && gan != 0 ) printf("1");
	else printf("0");
}

