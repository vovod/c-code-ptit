#include<stdio.h>
#include<string.h>
#include<math.h>

int a[1005];

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
	int dem = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(nguyento(a[i]) == 1) dem++;
	}
	printf("%d ", dem);
	for(int i = 0; i < n; i++){
		if(nguyento(a[i]) == 1) printf("%d ", a[i]);
	}
}

