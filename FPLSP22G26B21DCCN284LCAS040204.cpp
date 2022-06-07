//Nguyen Hai Duong
//B21DCCN284
//FPLSP22G26
#include <stdio.h>
#include <stdlib.h>

int GetRandom(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int *ptr = (int*) calloc(n, sizeof(int));
    int m, p;
    scanf("%d %d", &m, &p);
    if(m > p) swap(&m, &p);
    // printf("%d %d", m, p);
    int tang[10005] = {};
    int giam[10005] = {};
    for(int i = 0; i < n; i++) {
        *(ptr + i) = GetRandom(m, p);
        tang[i] = *(ptr + i);
        giam[i] = *(ptr + i);
    }
    // for(int i = 0; i < n; i++) printf("%d", *(ptr + i));
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(tang[i] > tang[j]) swap(&tang[i], &tang[j]);
            if(giam[i] < giam[j]) swap(&giam[i], &giam[j]);
        }
    }
    // for(int i = 0; i < n; i++) printf("%d ", tang[i]);
    // for(int i = 0; i < n; i++) printf("%d ", giam[i]);
    int k = 0;
    scanf("%d", &k);
    ptr = (int*) realloc(ptr, k * n *  sizeof(int));
    for(int i = 0; i < k * n; i++) {
        if((i / n) % 2 == 0) *(ptr + i) = tang[i % n];
        else *(ptr + i) = giam[i % n];
        // printf("%d ", *(ptr + i));
    }
    for(int i = 0; i < k * n; i++) printf("%d ", *(ptr + i));
    return 0;
}
