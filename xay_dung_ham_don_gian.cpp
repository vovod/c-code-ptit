#include<stdio.h>
#include<math.h>
#include<string.h>
//NHDvovod
double hackerlordnotwibu(double x){
	return 1.0 / (1.0 + exp(-x));
}
int main(){
	int n;
	scanf("%d", &n);
	double x;
	for(int i = 1; i <= n; i++){
		scanf("%lf", &x);
		printf("%.5lf\n", hackerlordnotwibu(x));
	}
}

