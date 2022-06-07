#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int t = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 2 * t - 1; j++){
			printf("%d", j);
		}
		t++;
		printf("\n");
	}
}

