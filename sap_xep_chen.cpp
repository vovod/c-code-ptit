#include<stdio.h>
#include<string.h>
#include<math.h>

int a[105];
int b[105];


int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	int dem = 0;
	int dem1 = 1;
	int x;
	for(int i = 1; i <= n; i++){
		printf("Buoc %d: ", dem);
		x = a[i];
       	int j = i-1;
       	while (j >= 0 && a[j] > x){
           a[j+1] = a[j];
           j = j-1;
       	}
       	a[j+1] = x;
       	for(int k = 1; k <= dem1; k++){
       		printf("%d ", a[k]);	
		}
		dem++;
		dem1++;
		printf("\n");
	}
}


