#include<stdio.h>
#include<math.h>
#include<string.h>

int nguyento(int a){
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
}

int tong(int n){
	int a = 0;
	while( n > 0 ){
		a = a+(n%10);
		n = n/10;
	}
	if(a % 5 == 0) return 1;
	return 0;
}

int main(){
	int a;
	scanf("%d", &a);
	int dem = 0;
	for(int i = 5; i <= a; i++){
		if(nguyento(i) == 1 && tong(i) == 1) {
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}

