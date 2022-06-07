#include<stdio.h>
#include<string.h>
#include<math.h>

int a[10005];
int b[10005];

int main(){
	int m, n, c;
	scanf("%d %d", &m, &n);
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	scanf("%d", &c);
	for(int i = 0; i <= m; i++){
		if(i == c){
			for(int j = 0; j < n; j++){
				printf("%d ", b[j]);
			}
			if(i != m) printf("%d ", a[i]);
		}
		else if(i != m) printf("%d ", a[i]);
	}
}

