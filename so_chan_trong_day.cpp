#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005];

int nguyento(long long a){
	if( a == 2 || a == 3){
		return 1;		
	}
	if( a % 2 == 0 || a % 3 == 0 || a == 1){
		return 0;
	}
	for( long long i = 5; i*i <= a; i++ ){
		if( a % i == 0 || a % (i+2) == 0 ) return 0;
		i = i + 6;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if(a[i] % 2 == 0) printf("%d ", a[i]);
		}
		printf("\n");
	}
}

