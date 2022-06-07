#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int cot, hang;
	scanf("%d %d", &hang, &cot);
	for(int i = 1; i <= hang; i++){
		for( int j = 1; j <= i-1; j++){
			printf("~");
		}
		for( int j = 1; j <= cot; j++){
			if(i == 1 || i == hang) printf("*");
			else{
				if(j == 1 || j == cot) printf("*");
				else printf(".");
			}
		}
		printf("\n");
	}
}

