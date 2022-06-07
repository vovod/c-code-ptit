#include <stdio.h>
int a[105][105];

long long F(int n)
{
	n = n - 1;
	if(n == 0) return 0;
    long long a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    long long i = 3, a;
    while (i <= n)
    {
        a = (a1 + a2);
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main()
{
    int n,i;
    int x=1;int y=0;
    scanf("%d",&n);
    while(y<=n/2){
        for(i=y;i<n-y;i++){
            x=x+1;
            a[y][i]=x;
        }
        for(i=y+1;i<n-y;i++){
            x=x+1;
            a[i][n-y-1]=x;
        }
        for(i=n-y-2;i>=y;i--){
            x=x+1;
            a[n-y-1][i]=x;
        }
        for(i=n-y-2;i>y;i--){
            x=x+1;
            a[i][y]=x;
        }
        y++;   
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",F(a[i][j]-1));
        }
        printf("\n");
    }
}

