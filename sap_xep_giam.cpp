#include<stdio.h>
#include<string.h>
#include<math.h>

int a[105];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int x;
	int dem = 1;
	for(int i = 1; i < n; i++){
		for(int j = i; j <= n; j++){
			if(a[i] < a[j]){
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	}
	}
	for(int k = 1; k <= n; k++){
		printf("%d ", a[k]);
	}
}

