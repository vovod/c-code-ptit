#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("0 ");
		}
		int dem = 1;
		for(int j = 1; j <= n - i; j++){
			printf("%d ",dem);
			dem++;
		}
		printf("\n");
	}
}

