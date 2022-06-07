#include <stdio.h>

int main()
{
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    int dem;
    if(hang < cot){
    	dem = 0;
	    for(int i = 1; i <= hang; i++){
			for(int j = 0; j < cot; j++){
				if(cot - j - dem < 1) break;
				printf("%d", cot - j - dem);
			}
			for(int j = 2; j <= i; j++){
				printf("%d", j);
			}
			printf("\n");
	    dem++;
		}
	}
	else{
		for(int i = hang; i >= 1; i--){
			dem = 1;
	        for(int j = i; j > 1; j--){
	        	if(dem > cot) break;
				printf("%d", j);
				dem++;
			}
	        for(int j = 1; j <= (cot - i + 1); j++){
				printf("%d", j);
			}
        	printf("\n");
    	}
	}
}
