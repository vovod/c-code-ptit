#include<stdio.h>
#include<string.h>
#include<math.h>

double a[100005];
int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	for(int i = 1; i <= n; i++){
		scanf("%lf", &a[i]);
		sum = sum + a[i];	
	}
	printf("%.3lf", sum / n);
}

