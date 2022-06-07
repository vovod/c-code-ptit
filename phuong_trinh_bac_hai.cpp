#include <stdio.h>
#include <math.h>

int main(void) {
	double a,b,c,denta,x1,x2;
	scanf("%lf%lf%lf",&a, &b, &c);
	denta = b*b - 4*a*c;
	if (denta < 0)
		printf("NO");
	else if (denta == 0)
		printf("%.2lf",(-b)/(2*a));
	else {
		x1 = (((-b) - sqrt(denta))/(2*a));
		x2 = (((-b) + sqrt(denta))/(2*a));
		if (x1 > x2) 
			printf("%.2lf %.2lf",x1,x2);
		else printf("%.2lf %.2lf",x2,x1);
	}
	return 0;
}
