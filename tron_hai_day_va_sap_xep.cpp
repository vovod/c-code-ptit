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
		for(int i = 0; i < n ; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n ; i++){
			scanf("%d", &b[i]);
		}
		int x;
		for(int i = 0; i < n; i++){
			for(int j = i; j < n; j++){
				if( a[j] < a[i]){
					x = a[j];
					a[j] = a[i];
					a[i] = x;
				}
				if( b[j] > b[i]){
					x = b[j];
					b[j] = b[i];
					b[i] = x;
				}
			}
		}
		printf("Test %d:\n", dem);
		for(int i = 0; i < 2*n ; i++){
			if(i % 2 == 0) printf("%d ", a[i/2]);
			else printf("%d ", b[i/2]);
		}
		dem++;
		printf("\n");
	}
	
}

