#include<stdio.h>
#include<math.h>
#include<string.h>
//NHDvovod
int a[1005][1005] = {0};
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int p, q, k;
	scanf("%d %d %d", &p, &q, &k);
	int x = m / p;
	if(m - p * x > 0) x++;
	int y = n / q;
	if(n - q * y > 0) y++;
	printf("%d %d\n", x, y);
	int hang = p;
	int cot = q;
	int dem = 0;
	int dem1 = 0;
	int dem2 = 0;
	while(dem2 < x * y){
		int max = 0;
		for(int i = k*dem + 1; i <= hang; i++){
			for(int j = k*dem1 + 1; j <= cot; j++){
				if(a[i][j] > max) max = a[i][j];
			}
		}
		printf("%d ", max);
		dem2++;
		cot = cot + k;
		if(dem2 % y == 0){
			cot = q;
			hang = hang + k;
			dem++;
			printf("\n");
			dem1=0;
		}
		else{
			dem1++;
		}
	}
}

