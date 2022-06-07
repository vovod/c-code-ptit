#include<stdio.h>
#include<math.h>
#include<string.h>

int daucuoi(int a){
    int x = a;
    int b = 0;
    while(a > 0){
        b = (b + a % 10) * 10;
        a = a / 10;
    }
    b = b / 10;
    if(b - x == 0) return 1;
    else return 0;
}

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

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		int dem = 0;
		for(int i = n; i <= m; i++){
			if(nguyento(i) == 1 && daucuoi(i) == 1){
				printf("%d ", i);
				dem++;
				if(dem % 10 == 0 && dem > 0) printf("\n");
			}
		}
		printf("\n");
	}
}

