#include<stdio.h>
#include<math.h>
#include<string.h>
//NHDvovod
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
	int a[10005];
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int demchan = 0;
	int demle = 0;
	int demnt = 0;
	int demcp = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] % 2 == 1) demle++;
		if(a[i] % 2 == 0) demchan++;
		if(nguyento(a[i]) == 1) demnt++;
		if(sqrt((double)a[i]) == (int)sqrt((double)a[i]) && a[i] != 1) demcp++;
	}
	printf("%d %d %d %d", demchan, demle, demnt, demcp);
}

