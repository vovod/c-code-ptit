#include<stdio.h>
#include<math.h>
#include<string.h>
int b[100000]={0};
int c[100000]={0};
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
		b[a[i]]++;
		c[a[i]]++;
		}
	for(int i=0; i<n; i++){
		if(b[a[i]]!=0) {
			printf ("%d ",a[i]);
			b[a[i]]=0;
		}
	}
	printf("\n");
	for(int i=0; i<n; i++){
		if(c[a[i]]!=0) {
			printf ("%d ",c[a[i]]);
			c[a[i]]=0;
		}
	}
	return 0;
}
