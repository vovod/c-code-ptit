#include<stdio.h>
#include<string.h>
#include<math.h>

int a[1005][1005];

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}	
}

