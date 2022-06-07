#include<stdio.h>
#include<math.h>
long long snt(long long n){
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0) {
            while (n%i==0 && n!=i)
                n/=i; 
            }
      }
    return n;
  }
int main (){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf ("%lld\n",snt(n));
    }
}
