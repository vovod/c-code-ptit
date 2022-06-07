#include <stdio.h>
#include <string.h>
struct thisinh
{
	int ma;
	char name[50];
	char dob[20];
	double d1, d2, d3, dt;
};
int main()
{
	int n;
	scanf("%d", &n);
	double max = 0;
	struct thisinh ts[n], std;
	for (int i = 0; i < n; i++)
	{
		scanf("\n");
		gets(ts[i].name);
		scanf("\n");
		gets(ts[i].dob);
		scanf("\n");
		scanf("%lf %lf %lf", &ts[i].d1, &ts[i].d2, &ts[i].d3);
		ts[i].ma = i + 1;
		ts[i].dt = ts[i].d1 + ts[i].d2 + ts[i].d3;
		if (ts[i].dt > max)
			max = ts[i].dt;
	}
	for (int i = 0; i < n; i++)
		if (ts[i].dt == max)
			printf("%d %s %s %.1lf\n", ts[i].ma, ts[i].name, ts[i].dob, ts[i].dt);
}
