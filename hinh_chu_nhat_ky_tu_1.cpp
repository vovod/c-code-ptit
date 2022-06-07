#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int hang, cot;
	scanf("%d %d", &hang, &cot);
	for(int i = 1; i <= hang; i++){
		int dem = 1;
		for(int j = 1; j <= cot; j++){
			if(hang >= cot){
				if(dem < i) printf("%c", hang - j + 1 + 96);
				else printf("%c", hang - i + 1 + 96);
				dem++;
			}
			else{
				if(dem < i) printf("%c", cot - j + 1 + 96);
				else printf("%c", cot - i + 1 + 96);
				dem++;
			}
		}
		printf("\n");
	}
}

