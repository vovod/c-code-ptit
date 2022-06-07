#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c;
		scanf("%lf%lf%lf", &a, &b, &c);
		printf("%d", (int)a / b);
		double x = a / b;
		if(c == 0){
			printf("\n");
			continue;
		}
		else{
			printf(".");
		}
		for(int i = 1; i <= c; i++){
			x = x * 10;
			long long y = (long long)x % 10;
			printf("%d", y); 
		}
		printf("\n");
	}
}

