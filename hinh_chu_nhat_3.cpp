#include <stdio.h>

int main()
{
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    for(int i=1; i<=hang; i++){
    	int dem = 0;
        for(int x=i; x>1; x--){
        	if(dem >= cot) break;
			printf("%d", x);
			dem++;
		}
        for(int x=1; x<=(cot -i+1); x++){printf("%d", x);}
        printf("\n");
    }
}
