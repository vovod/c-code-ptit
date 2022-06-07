#include<stdio.h>
#include<math.h>
#include<string.h>
//NHDvovod
int a[1005][1005];
int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int m, n;
		scanf("%d %d", &m, &n);
		int maxhang = -999990;
		int maxcot = -999990;
		int sumh = 0;
		int sumc = 0;
		int hang, cot;
		for(int i = 1; i <= m; i++){
			sumh = 0;
			for(int j = 1; j <= n; j++){
				scanf("%d", &a[i][j]);
				sumh = sumh + a[i][j];
			}
			if(sumh > maxhang){
				hang = i;
				maxhang = sumh;
			}
		}
		printf("Test %d:\n", dem);
		dem++;
		for(int i = 1; i <= n; i++){
			sumc = 0;
			for(int j = 1; j <= m; j++){
				if(j == hang) continue;
				sumc = sumc + a[j][i];
			}
			if(sumc > maxcot){
				cot = i;
				maxcot = sumc;
			}
		}
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				if(i != hang && j != cot) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}

