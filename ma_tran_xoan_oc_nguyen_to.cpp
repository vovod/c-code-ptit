#include <stdio.h>
int a[105][105];
int b[10005];
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
	int dem = 1;
	int dem1 = 1;
	for(int i = 2; i <= 10000; i++){
		if(nguyento(i) == 1) {
			b[dem1] = i;
			dem1++;		
		}
	}
	scanf("%d", &t);
	while(t--){
	    int n,i;
	    int x=1;int y=0;
	    scanf("%d",&n);
	    printf("Test %d:\n", dem); dem++;
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
	        	int x = a[i][j] - 1;
	            printf("%d ",b[x]);
	        }
	        printf("\n");
	    }
	}
}

