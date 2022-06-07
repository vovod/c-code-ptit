#include<stdio.h>
#include<math.h>
#include<string.h>
//NHDvovod
int a[1000][1000];
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
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int dem = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(j >= i && nguyento(a[i][j]) == 1) dem = dem + a[i][j];
		}
	}
	printf("%d", dem);
}

