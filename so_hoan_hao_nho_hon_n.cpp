#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n > 33550336) printf("6 28 496 8128 33550336");
	else if(n > 8128) printf("6 28 496 8128");
	else if(n > 496) printf("6 28 496");
	else if(n > 28) printf("6 28");
	else if(n > 6) printf("6");
}

