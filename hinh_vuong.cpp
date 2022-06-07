#include <stdio.h>
#include <math.h>
#include <string.h>
//NHDvovod
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double x1, x2, y1, y2;
		scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
		if(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) == sqrt(2)*sqrt((x2-x1)*(x2-x1))) printf("YES\n");
		else printf("NO\n");
	}
}

