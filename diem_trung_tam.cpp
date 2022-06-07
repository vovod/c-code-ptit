#include<stdio.h>
#include<string.h>
#include<math.h>

int a[200005];
int b[200005];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= 2 * (n - 1); i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(int i = 1; i <= n; i++){
		if(b[a[i]] == n - 1){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}

