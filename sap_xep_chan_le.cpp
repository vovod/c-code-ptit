#include<stdio.h>
#include<string.h>
#include<math.h>

long long a[105];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	long long x;
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(a[i] > a[j]){
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(a[i] % 2 == 0){
			printf("%lld ", a[i]);
		}
	}
	for(int i = 1; i <= n; i++){
		if(a[i] % 2 != 0){
			printf("%lld ", a[i]);
	}
	}
}


