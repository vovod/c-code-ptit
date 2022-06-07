#include<stdio.h>
#include<string.h>
#include<math.h>

int a[1005];

int main(){
	int n;
	scanf("%d", &n);
	int be1;
	int be2 = 99999999;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(i == 0){
			be1 = a[i];
		}
		if(be1 > a[i]) be1 = a[i];
	}
	for(int i = 0; i < n; i++){
		if((be2 > a[i]) && (a[i] > be1)) be2 = a[i];
	}
	printf("%d %d", be1, be2);	
}

