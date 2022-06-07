#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005] = {0};

int main(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int dem = 1;
	for(int i = 1; i <= m; i++){
		if(i != m) printf("%d ", a[i]);
	}
	printf("%d; ", a[m]);
	for(int i = 1; i < n + m; i++){
		if(dem == m){
			for(int j = i - k + 1; j < i - k + m; j++){
				if(j != i - k + m) printf("%d ", a[j]);
			}
			if(i <= n - m + k) printf("%d; ", a[i - k + m]);
			else printf("%d ", a[i - k + m]);
			dem = 1;
		}
		if(i - k + 1 > n - k) break;
		dem++;
	}
}

