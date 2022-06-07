#include<stdio.h>
#include<math.h>
#include<string.h>

int daucuoi(int a){
    int x = a;
    int b = 0;
    while(a > 0){
        b = (b + a % 10) * 10;
        a = a / 10;
    }
    b = b / 10;
    if(b - x == 0) return 1;
    else return 0;
}

int tong(int n){
	int a = 0;
	while( n > 0 ){
		if(n % 10 == 4) return 0;
		a = a+(n%10);
		n = n/10;
	}
	if(a % 10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = pow(10,n-1); i < pow(10,n); i++){
			if(tong(i) == 1 && daucuoi(i) == 1) printf("%d ", i);
		}
		printf("\n");
	}
}

