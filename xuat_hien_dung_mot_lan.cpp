#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int dem2 = 0;
	for(int i = 0; i < n; i++){
		int dem = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == a[j]) dem++;
			if(j == n - 1 && dem == 1) dem2++;
		}
	}
	printf("%d\n", dem2);
	for(int i = 0; i < n; i++){
		int dem = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == a[j]) dem++;
			if(j == n - 1 && dem == 1) printf("%d ", a[i]);
		}
	}
}

