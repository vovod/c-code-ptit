#include<stdio.h>
#include<string.h>
#include<math.h>

int a[1005][1005];

int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int m, n;
		scanf("%d %d", &m, &n);
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", dem);
		for(int i = 2; i <= m; i++){
			for(int j = 2; j <= n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}	
		printf("\n");
		dem++;
	}
}

