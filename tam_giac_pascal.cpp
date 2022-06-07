#include<stdio.h>
#include<string.h>
#include<math.h>

int giaithua(int x){
	if(x == 0) return 1;
	return x * giaithua(x - 1);
}

int pascal(int n, int k){
	return (giaithua(n))/(giaithua(k) * giaithua(n - k));
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			printf("%d ", pascal(i, j));
		}
		printf("\n");
	}
}

