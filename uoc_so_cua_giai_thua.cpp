#include<stdio.h> 
int main(){ 
	int t; 
	int n, dem, gan, p, i; 
	scanf("%d", &t); 
	while(t--){ 
		dem = 0; 
		scanf("%d %d", &n, &p); 
		i = 1; 
		while(p*i <= n){ 
			gan	 = p*i; 
			while(gan % p == 0){ 
				gan /= p; 
				dem++; 
			} 
			i++;
		} 
		printf("%d\n", dem); 
	} 
}
