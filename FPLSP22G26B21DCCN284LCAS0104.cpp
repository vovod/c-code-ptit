#include<stdio.h>
#include<string.h>
#include<math.h>

int nguyento(long long a){
	if( a == 2 || a == 3){
		return 1;		
	}
	if( a % 2 == 0 || a % 3 == 0 || a == 1){
		return 0;
	}
	for( long long i = 5; i*i <= a;){
		if( a % i == 0 || a % (i+2) == 0 ) return 0;
		i = i + 6;
	}
	return 1;
}

int c[1000][1000];

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int dem = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			scanf("%d", &c[i][j]);
			if(nguyento(c[i][j]) == 1) dem++;
		}
	}
	printf("%d", dem);
}

