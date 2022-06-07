#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int dem = 1;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			for(int j = 1; j <= i; j++){
				printf("%d ", dem);
				dem++;
			}
		}
		else{
			dem = dem + i - 1;
			for(int j = 1; j <= i; j++){
				printf("%d ", dem);
				dem--;
			}	
			dem = dem + i + 1;
		}
		printf("\n");
	}
}

