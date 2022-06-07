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

int tong1(int n){
	int a;
	while( n > 0 ){
		a = n%10;
		if(a == 9) return 0;
		n = n/10;
	}
	return 1;
}

int main(){
	int a;
	scanf("%d", &a);
	int dem = 0;
	for(int i = 2; i <= a; i++){
		if(daucuoi(i) == 1 && tong1(i) == 1) {
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}

