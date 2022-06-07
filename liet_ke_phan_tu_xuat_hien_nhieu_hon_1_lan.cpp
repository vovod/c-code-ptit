#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005];
int b[1000000] = {0};
int c[1000000] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
		c[a[i]]++;
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(b[a[i]] > 1 && c[a[i]] > 1){
			dem++;
			c[a[i]] = 0;
		}
	}
	printf("%d\n", dem);
	for(int i = 0; i < n; i++){
		if(b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
}

