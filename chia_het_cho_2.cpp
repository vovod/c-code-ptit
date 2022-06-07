#include<stdio.h> 

int main(){ 
	int t; 
	scanf("%d", &t); 
	while (t--){ 
		int n; 
		scanf("%d", &n); 
		int x = 1; 
		int dem = 0; 
		while (x <= n/x) { 
			if(n % x == 0){ 
				if (x % 2 == 0) dem++; 
				if (n / x % 2 == 0) dem++; 
				if (n / x == x && x % 2 == 0) dem--; 
			} 
			x++;
		} 
		printf ("%d\n", dem); 
	} 
}
