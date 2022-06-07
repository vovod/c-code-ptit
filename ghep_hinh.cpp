#include<stdio.h>
#include<string.h>
#include<math.h>

int a[10];

int main(){
	int a1, b1, a2, b2, a3, b3;
	scanf("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);
	int x;
	if(a1 > b1){
		x = a1;
		a1 = b1;
		b1 = x; 
	}
	if(a2 > b2){
		x = a2;
		a2 = b2;
		b2 = x; 
	} 
	if(a3 > b3){
		x = a3;
		a3 = b3;
		b3 = x; 
	}
    if(b1 == b2 && b2 == b3 && a1 + a2 + a3 == b1) printf("YES"); 
	int n = 0; 
	if(b3 == a3 + b1 && b1 == a2 && b2 + a1 == b3 || b3 == a1 + a3 && b2 == a1 && b1 + a2 == b3 || b3 == a3 + b1 && b1 == b2 && a1 + a2 == b3 || b3 == a1 + a3 && a2 == a1 && b1 + b2 == b3 || b2 == a2 + b3 && a1 == b3 && b1 + a3 == b2 || b2 == b1 + b3 && a1 == a3 && a1 + a2 == b2 || b2 == b1 + a2 && b3 == b1 && a1 + a3 == b2 || b2 == a2 + b1 && a3 == b1 && a1 + b3 == b2 || b1 == a1 + a2 && a2 == b3 && a3 + b2 == b1 || b1 == b2 + a1 && b2 == a3 && b3 + a2 == b1 || b1 == a1 + b2 && b3 == b2 && a2 + a3 == b1 || b1 == a1 + a2 && a2 == a3 && b2 + b3 == b1) n=1; 
	if(n == 1) printf("YES");
	else if(n==0) printf("NO");
}

