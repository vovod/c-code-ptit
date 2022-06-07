#include<stdio.h>
#include<string.h>
#include<math.h>

int a[10005];

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int dem = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j < i; j++){
				if(a[j] > a[i]){
					break;
				}
				if(j == i - 1) dem++;
			}
		}
		printf("%d\n", dem + 1);
	}
}

