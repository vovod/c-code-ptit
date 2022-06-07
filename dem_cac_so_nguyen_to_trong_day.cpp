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

int a[100005];
int b[1000000] = {0};

int main(){
	int t;
	scanf("%d", &t);
	int dem = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 0; i < 100005; i++){
			b[i] = 0;
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n", dem);
		dem++;
		for(int i = 0; i < 100005; i++){
			if(b[i] >= 1 && nguyento(i) == 1){
				printf("%d xuat hien %d lan\n", i, b[i]);
			}
		}
	}
}

