#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int cot, hang;
	scanf("%d %d", &hang, &cot);
	int a[100][100];
	for(int i = 0; i < hang; i++){
		for( int j = 1; j <= cot; j++){
			int x = j + i;				
			if(x > cot) x = cot;
			a[i][j] = x;
			//printf("%c", x + 63);
		}
		//printf("\n");
	}
	for(int i = hang - 1; i >= 0; i--){
		for(int j = 1; j <= cot; j++){
			printf("%c", a[i][j] + 64);
		}
		printf("\n");
	}
}

