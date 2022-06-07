#include <stdio.h>
int main()
{
    long long t,n,dem;
    scanf("%lld",&t);
    long long a[10005],b[10005];
    while(t--){
        dem=0;
        scanf("%lld",&n);
        for(long long i=1;i<=n;i++){
            scanf("%lld", &a[i]);
        }
        for(long long i=1;i<=n;i++){
            b[i]=a[n-i+1];
        }
        for(long long i=n/2;i>=1;i--){
            if(a[i]!=b[i]){dem+=1;break;}
        }
        if(dem!=0){printf("NO\n");}
        else{printf("YES\n");}
    }
}
