//Nguyen Hai Duong
//B21DCCN284
//FPLSP22G26
#include <stdio.h>
#include <math.h>

void sort(int a[], int soa) {
    for(int i = 0; i < soa - 1; i++) {
        int ind = i;
        for(int j = i; j < soa; j++) {
            if(a[j] < a[ind]) ind = j; 
        }
        int x = a[i];
		a[i] = a[ind];
		a[ind] = x;
    }
}

double trungvi(int a[], int soa) {
    if(soa % 2) return (double) a[soa / 2];
    else return (double) (a[soa / 2] + a[(soa / 2) - 1]) / 2;
}

double trungbinh(int a[], int soa) {
    double sum = 0;
    for(int i = 0; i < soa; i++) sum += a[i];
    return sum / soa;
}

double phuongsai(int a[], int soa) {
    double trungbinhOfA = trungbinh(a, soa);
    double sum = 0;
    for(int i = 0; i < soa; i++) {
        sum += (trungbinhOfA - a[i]) * (trungbinhOfA - a[i]);
    }
    return sum / (soa);
}


int main() {
    int n;
    scanf("%d",&n);
    int A[n]; // Có th? ph?i d?i sang m?ng khai báo v?i kích thu?c h?ng s?
    int *aptr;
    aptr = &A[0];
    for(int i = 0; i < n; i++) scanf("%d", aptr + i);
    sort(A, n);
    printf("So lon nhat cua mang : %d\n", A[n - 1]);
    printf("So nho nhat cua mang : %d\n", A[0]);
    printf("So trung vi cua mang : %g\n", trungvi(A, n));
    printf("So trung binh cua mang : %g\n", trungbinh(A, n));
    printf("Phuong sai cua mang : %g\n", phuongsai(A, n));
}
