#include<stdio.h>
#include <math.h>
int main(){
  double a, b, c;
  scanf("%lf%lf%lf",&a,&b,&c);
  if( a<b+c && b<a+c && c<a+b ){
		printf("YES ");
		printf("%.5lf ", acos((b*b + c*c - a*a)/(2*b*c)));
		printf("%.5lf ", acos((a*a + c*c - b*b)/(2*a*c)));
		printf("%.5lf ", acos((b*b + a*a - c*c)/(2*b*a)));
    }
  else
    printf("NO 0 0 0");
}
