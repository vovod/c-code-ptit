#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		double n;
		scanf("%lf", &n);
		printf("%.15lf\n", 1.0/n);
	}
}

