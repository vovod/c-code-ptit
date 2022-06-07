#include<stdio.h>
#include<math.h>
#include<string.h>

int daucuoi(long long a){
    long long x = a;
    long long b = 0;
    while(a > 0){
        b = (b + a % 10) * 10;
        a = a / 10;
    }
    b = b / 10;
    if(b - x == 0) return 1;
    else return 0;
}

int tong(long long n){
	long long a = 0;
	while( n > 0 ){
		a = a+(n%10);
		n = n/10;
	}
	return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if((int)log10(n) % 2 == 0 && tong(n) % 2 == 1 && daucuoi(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}

