#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int t = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= t; j++){
			if(i % 2 == 1) printf("%d", j * 2 - 1);
			else printf("%d", j * 2);
		}
		t++;
		printf("\n");
	}
}

