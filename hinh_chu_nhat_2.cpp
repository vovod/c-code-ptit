#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int cot, hang;
	scanf("%d %d", &hang, &cot);
	for(int i = 0; i < hang; i++){
		int dem=1;
		for( int j = 1; j <= cot; j++){
			int x = j + i;			
			if(i < cot && x > cot){
				x = cot - dem;
				dem++;
			}
			else if(i >= cot && x > cot && j != 1){
				x = i - dem + 1;
				dem++;
			}
			printf("%d", x);
		}
		printf("\n");
	}
}

