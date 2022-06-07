#include<stdio.h>

int a[100][100];
int b[100][100];
int c[100][100];
int d[100][100];
int e[100][100];


int main() {
    int a[10][10], b[10][10], c[10][10], i, j, k;
    int sum = 0;
	int m, n , p, q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
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
   	for (i = 0; i < p; i++) {
      	for (j = 0; j < q; j++) {
         	scanf("%d", &c[i][j]);
      	}
   	}
   //phep nhan ma tran
   for (i = 0; i < m; i++) {
      for (j = 0; j < p; j++) {
         sum = 0;
         for (k = 0; k < n; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         d[i][j] = sum;
      }
   }
   for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
         sum = 0;
         for (k = 0; k < p; k++) {
            sum = sum + d[i][k] * c[k][j];
         }
         e[i][j] = sum;
      }
   }
   for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
         printf("%d ", e[i][j]);
      }
      printf("\n");
   }
   return (0);
}
