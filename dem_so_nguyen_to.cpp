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

int chusonguyento(int a){
	while(a > 0){
		if(a % 10 != 2 && a % 10 != 3 && a % 10 != 5 && a % 10 != 7) return 0;
		a = a / 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(nguyento(i) == 1 && chusonguyento(i) == 1) dem++;
		}
		printf("%d\n", dem);
	}
}

