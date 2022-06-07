#include <stdio.h>
#include <string.h>
char xau[100001];

int a[1005];

int nguyento(long long a){
	if( a == 2 || a == 3){
		return 1;		
	}
	if( a % 2 == 0 || a % 3 == 0 || a == 1){
		return 0;
	}
	for( long long i = 5; i*i <= a;){
		if( a % i == 0 || a % (i+2) == 0 ) return 0;
		i = i + 6;
	}
	return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",xau);
        int dem=0;
        int dai=strlen(xau);
        for(int i=0;i<=(dai-1)/2;i++){
            //printf("%c %c\n",xau[i],xau[dai-1-i]);
            if((int)xau[i]!=(int)xau[dai-1-i] || nguyento((int)(xau[i]-'0')) == 0){printf("NO\n"); dem=1; break;}
        }
        if(dem==1) continue;
        printf("YES\n");
    }
}

