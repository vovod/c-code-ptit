#include<stdio.h>
#include<string.h>
#include<math.h>

int a[100005];
int b[1000000] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
}

