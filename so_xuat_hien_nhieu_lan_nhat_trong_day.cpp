#include<stdio.h>
#include<string.h>
#include<math.h>

int a[1005];
int b[30005];

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 1; i < 30005; i++){
			b[i] = 0;
		}
		int max = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
			if(b[a[i]] >= max) max = b[a[i]];
		}
		for(int i = 1; i <= n; i++){
			if(b[a[i]] == max){
				printf("%d ", a[i]);
				b[a[i]] = 0;
			}
		}
		printf("\n");
	}
}

