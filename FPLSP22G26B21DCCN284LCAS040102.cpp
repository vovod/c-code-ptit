//Nguyen Hai Duong
//B21DCCN284
//FPLSP22G26
#include<stdio.h>
#include<math.h>
#include<string.h>
int min(int a[], int n){
	int min = a[1];
	for(int i = 1; i <= n; i++){
		if(min > a[i]) min = a[i];
	}
	return min;
}
int max(int a[], int n){
	int max = a[1];
	for(int i = 1; i <= n; i++){
		if(max < a[i]) max = a[i];
	}
	return max;
}
double trungvi(int a[], int n){
	if(n % 2 == 0) return (double)(a[(int)n/2] + a[(int)(n/2)+1])/2;
	return (double)a[(int)(n/2)+1];
}
double trungbinh(int a[], int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum = sum + a[i];
	}
	double x = (double)sum/n;
	return x;
}
int main(){
	int n;
	int a[10000];
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d\n%d\n%lf\n%lf", max(a, n), min(a, n), trungvi(a, n), trungbinh(a, n));
}

