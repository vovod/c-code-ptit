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
	for(int i = 1; i <= n; i++){
		int dem1 = 1;
		for(int j = 1; j <= n - i; j++){
			if (a[j] > a[j + 1]){
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
				dem1++;
			}
		}
		if(dem1 == 1) break;
		printf("Buoc %d: ", dem);
		for(int k = 1; k <= n; k++){
			printf("%d ", a[k]);
		}
		dem++;
		printf("\n");
	}
	if(dem == 1){
		printf("Buoc %d: ", dem);
		for(int k = 1; k <= n; k++){
			printf("%d ", a[k]);
		}
	}
}


