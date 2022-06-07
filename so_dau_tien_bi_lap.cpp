#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005];


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		int x;
		int dem = 0;
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j <= n; j++){
				if(a[j] == a[i]){
					printf("%d\n", a[i]);
					dem = 1;
					break;
				}
			}
			if(dem == 1) break;
		}	
		if(dem == 0) printf("NO\n");
	}
}

