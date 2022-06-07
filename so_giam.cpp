#include<stdio.h>
#include<math.h>
#include<string.h>

int sogiam(int n){
	if(n < 10){
		return 0;
	}
	int x = n % 10;
	n = n / 10;
	int y;
	while(n > 0){
		y = n % 10;
		if(y <= x){
			return 0;
		}
		x = y;
		n = n / 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(sogiam(i) == 1){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}

