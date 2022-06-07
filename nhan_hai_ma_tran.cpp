#include<stdio.h>

int a[100][100];
int b[100][100];
int c[100][100];


int main() {
    int sum = 0;
	int m, n , p, q;
	int i, j, k;
	scanf("%d %d %d", &m, &n, &p);
 	for (i = 0; i < m; i++) {
      	for (j = 0; j < n; j++) {
        	scanf("%d", &a[i][j]);
      	}
    }
    for (i = 0; i < n; i++) {
       	for (j = 0; j < p; j++) {
         	scanf("%d", &b[i][j]);
      	}
   	}
   //phep nhan ma tran
   for (i = 0; i < m; i++) {
      for (j = 0; j < p; j++) {
         sum = 0;
         for (k = 0; k < n; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
   for (i = 0; i < m; i++) {
      for (j = 0; j < p; j++) {
         printf("%d ", c[i][j]);
      }
      printf("\n");
   }
   return (0);
}
