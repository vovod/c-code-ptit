#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		double n;
		scanf("%lf", &n);
		if( (int)sqrt(n) == sqrt(n) ){
			printf("YES");			
		}
		else{
			printf("NO");
		}
		printf("\n");
	}
}

