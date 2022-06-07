#include<stdio.h>
#include<string.h>
#include<math.h>

char a[1005];

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		fgets(a, sizeof(a), stdin);
		int dem = 1;
		int dai = strlen(a) - 1;
		for(int i = 0; i < dai; i++){
			if(a[i] != ' ' && a[i - 1] == ' ') dem++;
		}
		printf("%d\n", dem);
		
	}
}

