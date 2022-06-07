#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = n; i >= 1; i--){
		for(int j = n - i; j < n; j++){
			printf("%c", i + j + 63 - (n - i));
		}
		printf("\n");
	}
}

