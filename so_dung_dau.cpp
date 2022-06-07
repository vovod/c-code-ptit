#include<stdio.h>
#include<string.h>
#include<math.h>

int a[10005];
int b[10005];

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		int dem = 1;
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				//printf("%d ", a[i]);
				if(a[j] >= a[i]) j = n + 1;
				if(j == n){
					b[dem] = a[i];
					dem++;
				}
			}
		}
		b[dem] = a[n];
	    int max;
	    for(int i = 1; i <= dem - 1 ; i++)
	    {
	        for(int x = 1; x <= dem - 1 ; x++)
	        {
	            if(b[x]<b[x+1])
	            {
	                max=b[x];
	                b[x]=b[x+1];
	                b[x+1]=max;
	            }   
	        }
	    }
		for(int i = 1; i <= dem; i++){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}

