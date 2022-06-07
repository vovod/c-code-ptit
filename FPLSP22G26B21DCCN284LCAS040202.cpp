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

int findmin(int *aptr, int A[] ,int n)
{
    int *m = &A[0];
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
        if(*m > *aptr) m = aptr; 
    }
    return *m;
} 

int findmax(int *aptr, int A[] ,int n)
{
    int *m = &A[0];
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
        if(*m < *aptr) m = aptr; 
    }
    return *m;
}

double faverage(int *aptr, int A[] ,int n)
{
    double avg = 0;
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
	    avg += *aptr;
    }
    avg = 1.0 * avg / n;
    return avg;
}

double fmo(int *aptr, int A[] ,int n)
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

double fD(int *aptr, int A[] ,int n, double avg)
{
    double D = 0;
    for (aptr = &A[0]; aptr < &A[n]; aptr++)
    {
        D += (*aptr - avg) * (*aptr - avg);
    }
    D = 1.0 * D / n;
    return D;
}

int N, M;

int main()
{
    scanf("%d%d", &N, &M);

    int *aptr;
    int *p = (int *)malloc(N * sizeof(int));
    
    srand((int)time(0));
    FOR(i,0,N-1,1) 
    {
        p[i] = rand() % M;
    }

    printf("%d\n%d\n%.2lf\n%.2lf\n%.2lf", findmax(aptr,p,N), findmin(aptr,p,N), 
    faverage(aptr,p,N),fmo(aptr,p,N),fD(aptr,p,N,faverage(aptr,p,N)));

    free(p);
	return 0;
}







