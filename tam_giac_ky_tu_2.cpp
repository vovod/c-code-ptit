#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = n; i >= 1; i--){
		for(int j = n - i + 1; j <= n; j++){
			printf("%c", j * 2 - 1 + 64);
		}
		printf("\n");
	}
}

