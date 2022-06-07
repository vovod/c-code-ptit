#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int cot, hang;
	scanf("%d %d", &hang, &cot);
	for(int i = 0; i < hang; i++){
		for( int j = 1; j <= cot; j++){
			int x = j + i;				
			if(x > cot) x = cot;
			printf("%c", x + 63);
		}
		printf("\n");
	}
}

