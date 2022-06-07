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
		a = a+(n%10);
		n = n/10;
	}
	if(a % 10 == 8) return 1;
	return 0;
}

int tong1(int n){
	int a;
	while( n > 0 ){
		a = n%10;
		if(a == 6) return 1;
		n = n/10;
	}
	return 0;
}

int main(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	if(a > b){
		c = a;
		a = b;
		b = c;
	}
	for(int i = a; i <= b; i++){
		if(daucuoi(i) == 1 && tong(i) == 1 && tong1(i) == 1) printf("%d ", i);
	}
}

