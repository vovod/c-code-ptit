#include<stdio.h>
#include<string.h>
#include<math.h>

int a[1000];
int b[1000];

int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		int max = 1;
		int dem1 = 1;
		for(int i = 1; i <= n ; i++){
			scanf("%d", &a[i]);
			if(i == 1) dem1 = 1;
			else if(a[i] > a[i - 1]) dem1++;
			else dem1 = 1;
			if(dem1 > max) max = dem1;
		}
		dem1 = 1;
		printf("Test %d:\n%d\n", dem, max);
		for(int i = 1; i <= n ; i++){
			if(i == 1) dem1 = 1;
			else if(a[i] > a[i - 1]) dem1++;
			else dem1 = 1;
			if(dem1 == max){
				for(int j = i - max + 1; j <= i; j++){
					printf("%d ", a[j]);
				}
				printf("\n");
				dem1 = 1;
			}
		}
		dem++;
	}
	
}

