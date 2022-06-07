#include<stdio.h>
#include<math.h>
#include<string.h>

long long daucuoi(long long a){
    long long x = a;
    long long b = 0;
    while(a > 0){
        b = (b + a % 10) * 10;
        a = a / 10;
    }
    b = b / 10;
    return b;
}

int main(){
	long long n;
	scanf("%lld", &n);
	int dem2 = 0;
	int dem3 = 0;
	int dem5 = 0;
	int dem7 = 0;
	long long x = n;
	while(x > 0){
		if(x % 10 == 2) dem2++;
		if(x % 10 == 3) dem3++;
		if(x % 10 == 5) dem5++;
		if(x % 10 == 7) dem7++;
		x = x / 10;
	}
	n = daucuoi(n);
	while(n > 0){
		if(n % 10 == 2){
			if(dem2 != 0){
				printf("2 %d\n", dem2);
				dem2 = 0;
			}
		}
		if(n % 10 == 3){
			if(dem3 != 0){
				printf("3 %d\n", dem3);
				dem3 = 0;
			}
		}
		if(n % 10 == 5){
			if(dem5 != 0){
				printf("5 %d\n", dem5);
				dem5 = 0;
			}
		}
		if(n % 10 == 7){
			if(dem7 != 0){
				printf("7 %d\n", dem7);
				dem7 = 0;
			}
		}
		n = n / 10;
	}	
}

