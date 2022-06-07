#include<stdio.h>
#include<math.h>
#include<string.h>

int chanle(int a){
	if( a%2 == 0 ) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int chan = 0;
		int le = 0;
		if(n == 0) chan++;
		while(n > 0){
			if(chanle(n%10) == 1) chan++;
			else le++;
			n = n/10;
		}
		printf("%d %d\n", le, chan);
	}
}

