#include<stdio.h>
#include<math.h>
#include<string.h>

int uocchung(int m, int n){
	if(m == n) return 1;
	while(m * n != 0){
		if(m > n) m = m % n;
		else n = n % m;
	}
	return m + n;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = a; i < b; i++){
		for(int j = i + 1; j <= b; j++){
			if(uocchung(i, j) == 1) printf("(%d,%d)\n", i, j);
		}
	}
}

