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
	int min;
	for(int i = 1; i < n; i++){
		min = i;
		for(int j = i + 1; j <= n; j++){
			if (a[j] < a[min]) min = j;
		}
			x = a[i];
			a[i] = a[min];
			a[min] = x;
		for(int k = 1; k <= n; k++){
			printf("%d ", a[k]);
		}
		dem++;
		printf("\n");
	}
}


