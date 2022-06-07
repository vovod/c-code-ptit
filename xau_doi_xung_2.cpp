#include<stdio.h>
#include<string.h>
#include<math.h>

char a[1000005];
int main(){
	fgets(a, sizeof(a), stdin);
	int dai = strlen(a) - 1;
	printf("%d", dai - 1);
}

