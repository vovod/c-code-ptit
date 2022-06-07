#include<stdio.h>
#include<math.h>
#include<string.h>

int nguyento(int a){
	if( a == 2 || a == 3){
		return 1;		
	}
	if( a % 2 == 0 || a % 3 == 0 || a == 1){
		return 0;
	}
	for( int i = 5; i*i <= a;){
		if( a % i == 0 || a % (i+2) == 0 ) return 0;
		i = i + 6;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= 10000000; i++){
		if(n <= 0) break;
		if( nguyento(i) == 1 ){
			printf("%d\n", i);
			n--;
		}
	}
}

