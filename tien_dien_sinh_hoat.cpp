#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    double n, tong =0;
    scanf("%lf", &n);
    if(n <= 0)
        printf("0");
    if(n > 0)
    {
        if(n <= 50)
        {
            printf("%.0lf %.3lf", n, n*1.678);
            tong = tong + n*1.678;
        }
        if(n > 50)
        {
            printf("50 83.900");
            tong = tong + 83.9;
        }
    }
    if(n > 50)
    {
        printf("\n");
        if(n <= 100)
        {
            printf("%.0lf %.3lf", n-50, (n-50)*1.734);
            tong = tong + (n-50)*1.734;
        }
        if(n >100)
        {
            printf("50 86.700");
            tong = tong + 83.9;
        }
    }
    if(n > 100)
    {
        printf("\n");
        if(n <= 200)
        {
            printf("%.0lf %.3lf", n-100, (n-100)*2.014);
            tong = tong + (n-100)*1.734;
        }
        if(n >100)
        {
            printf("100 201.400");
            tong = tong + 201.4;
        }
    }
    if(n > 200)
    {
        printf("\n");
        if(n <= 300)
        {
            printf("%.0lf %.3lf", n-200, (n-200)*2.536);
            tong = tong + (n-200)*2.536;
        }
        if(n >100)
        {
            printf("100 253.600");
            tong = tong +253.6;
        }
    }
    if(n > 300)
    {
        printf("\n");
        if(n <= 400)
        {
            printf("%.0lf %.3lf", n-300, (n-300)*2.834);
            tong = tong + (n-300)*2.834;
        }
        if(n >100)
        {
            printf("100 283.400");
            tong = tong +283.4;
        }
    }
    if(n > 400)
    {
        printf("\n");
        printf("%.0lf %.3lf", n-400, (n-400)*2.927);
        tong = tong + (n-400)*2.927;
    }
    if(n!=0) 
        printf("\nTONG %.3lf", tong);
    return 0;
}
