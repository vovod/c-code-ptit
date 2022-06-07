#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int a[105];
int b[105];
int c[105];

int main(){
	int n;
    scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		//scanf("%d",&a[i]);
        a[i] = rand()%20;
        b[i] = a[i];
        c[i] = a[i];
        printf("%d ", a[i]);
	}
    printf("\nSap xep chen:\n");
	int dem = 0;
	int dem1 = 1;
	int x;
	for(int i = 1; i <= n; i++){
		printf("Lan lap %d: ", dem);
		x = a[i];
       	int j = i-1;
       	while (j >= 0 && a[j] > x){
            a[j+1] = a[j];
            j--;
       	}
        printf("%d lon nhat nen chen vao truoc mang:\n", x);
       	a[j+1] = x;
       	for(int k = 1; k <= dem1; k++){
       		printf("%d ", a[k]);	
		}
		dem++;
		dem1++;
		printf("\n");
    }
    printf("Mang sau khi sap xep:\n");
	for(int i = 1; i <= n; i++){
        printf("%d ", a[i]);
	}
    /*printf("Sap xep chon:\n");
	dem = 1;
	int min;
	for(int i = 1; i < n; i++){
		printf("Lan lap %d: ", dem);
		min = i;
		for(int j = i + 1; j <= n; j++){
			if (b[j] < b[min]){
                min = j ;
            }
		}
        x = b[i];
        b[i] = b[min];
        b[min] = x;
		for(int k = 1; k <= n; k++){
			printf("%d ", b[k]);
		}
		dem++;
		printf("\n");
	}
    printf("Sap xep noi bot:\n");
	dem = 1;
	for(int i = 1; i <= n; i++){
		int dem1 = 1;
		for(int j = 1; j <= n - i; j++){
			if (c[j] > c[j + 1]){
				x = c[j];
				c[j] = c[j + 1];
				c[j + 1] = x;
				dem1++;
			}
		}
		if(dem1 == 1) break;
		printf("Lan lap %d: ", dem);
		for(int k = 1; k <= n; k++){
			printf("%d ", c[k]);
		}
		dem++;
		printf("\n");
	}
	if(dem == 1){
		printf("Lan lap %d: ", dem);
		for(int k = 1; k <= n; k++){
			printf("%d ", c[k]);
		}
	}*/
}