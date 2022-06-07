#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n == 2){printf("1\n");}
		else if(n == 3){printf("9\n");}
		else if(n == 4){printf("18\n");}
		else if(n == 5){printf("90\n");}
		else if(n == 6){printf("180\n");}
		else if(n == 7){printf("900\n");}
		else if(n == 8){printf("1800\n");}
		else if(n == 9){printf("9000\n");}
	}
}

