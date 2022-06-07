#include<stdio.h>
#include<string.h>
#include<math.h>

/*int nguyento(int a){
	if( a == 2 || a == 3 ){
		return 1;
	}
	if( a == 1 || a%2 == 0 || a%3 == 0 ){
		return 0;
	}
	for( int i = 5; i*i <= a; ){
		if( a%i == 0 || a%(i+2) == 0 ) return 0;
		i = i+6;
	}
	return 1;
}*/

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for( int i = 2; i <= n; i++ ){
			while( n%i == 0 ){
				printf("%d ", i);
				n = n/i;
			}
			if(n == 1)break;
		}
		printf("\n");
	}
}

