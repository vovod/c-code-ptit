#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	int x1 = sqrt(a);
	int x2 = sqrt(b);
	if( sqrt(a) > x1 ) x1++;
	printf("%d\n", x2-x1+1);
	for(int i = x1; i <= x2; i++){
		printf("%d\n", i*i);
	}
}

