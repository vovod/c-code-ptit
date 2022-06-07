//Nguyen Hai Duong
//B21DCCN284
//FPLSP22G26
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include <time.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define ll long long int


float findmin(float *aptr, float A[] ,int n)
{
    float *m = &A[0];
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
        if(*m > *aptr) m = aptr; 
    }
    return *m;
} 

float findmax(float *aptr, float A[] ,int n)
{
    float *m = &A[0];
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
        if(*m < *aptr) m = aptr; 
    }
    return *m;
}

float faverage(float *aptr, float A[] ,int n)
{
    float avg = 0;
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
	    avg += *aptr;
    }
    avg = 1.0 * avg / n;
    return avg;
}

float fmo(float *aptr, float A[] ,int n)
{
    if(n%2 == 1) 
    {
        aptr = &A[n/2];
        return *aptr;
    }
    else 
    {
        aptr = &A[n/2];

        return 1.0*(*aptr + *(aptr-1))/2;
    }
}

float fD(float *aptr, float A[] ,int n, float avg)
{
    float D = 0;
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
        D += (*aptr - avg) * (*aptr - avg);
    }
    D = 1.0 * D / n;
    return D;
}

int N;
float M, P;

int main()
{
    scanf("%d%f%f", &N, &M, &P);

    float *aptr;
    float *p = (float *)malloc(N * sizeof(float));
    
    srand((float)time(0));
    FOR(i,0,N-1,1) 
    {
        p[i] = (float)rand()/(float)RAND_MAX * (P-M) + M;
    }

    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f", findmax(aptr,p,N), findmin(aptr,p,N), 
    faverage(aptr,p,N),fmo(aptr,p,N),fD(aptr,p,N,faverage(aptr,p,N)));

    free(p);
	return 0;
}







