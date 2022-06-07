#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int dem = i;
		int dem1 = n;
		for(int j = 1; j <= i; j++){
			printf("%d ", dem);
			dem = dem + dem1 - j;
		}
		printf("\n");
	}
}

