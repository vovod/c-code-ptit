#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int dem = 1;
		for(int j = 1; j <= i; j++){
			printf("%c", dem + 63);
			dem += 2;
		}
		dem -= 4;
		for(int j = 1; j < i; j++){
			printf("%c", dem + 63);
			dem -= 2;
		}
		printf("\n");
	}
}

