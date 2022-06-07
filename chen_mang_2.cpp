#include<stdio.h>
#include<string.h>
#include<math.h>

int a[10005];
int b[10005];

int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int m, n, c;
		scanf("%d %d %d", &m, &n, &c);
		for(int i = 0; i < m; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", dem);
		for(int i = 0; i < m; i++){
			if(i == c){
				for(int j = 0; j < n; j++){
					printf("%d ", b[j]);
				}
				printf("%d ", a[i]);
			}
			else printf("%d ", a[i]);
		}
		dem++;
		printf("\n");
	}
}

