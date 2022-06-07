#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    double n, tong = 0;
    scanf("%lf", &n);
    if(n >= 0)
    {
        if(n <= 5)
        {
            printf("%.3lf %.3lf(5%c)", n, n/100*5,37);
            tong = tong + n/100*5;
        }
        if(n > 5)
        {
            printf("5.000 0.250(5%c)",37);
            tong = tong + 0.25;
        }
    }
    if(n>=5)
    {
        printf("\n");
        if(n <= 10)
        {
            printf("%.3lf %.3lf(10%c)", n-5, (n-5)/100*10,37);
            tong = tong + (n-5)/100*10;
        }
        if(n > 10)
        {
            printf("5.000 0.500(10%c)",37);
            tong = tong + 0.5;
        }
    }
    if(n>=10)
    {
        printf("\n");
        if(n <= 18)
        {
            printf("%.3lf %.3lf(15%c)", n-10, (n-10)/100*15,37);
            tong =tong + (n-10)/100*15;
        }
        if(n > 18)
        {
            printf("8.000 1.200(15%c)",37);
            tong =tong + 1.2;
        }
    }
    if(n>=18)
    {
        printf("\n");
        if(n <= 32)
        {
            printf("%.3lf %.3lf(20%c)", n-18, (n-18)/100*20,37);
            tong =tong + (n-18)/100*20;
        }
        if(n > 32)
        {
            printf("14.000 2.800(20%c)",37);
            tong = tong + 2.8;
        }
    }
    if(n>=32)
    {
        printf("\n");
        if(n <= 52)
        {
            printf("%.3lf %.3lf(25%c)", n-32, (n-32)/100*25,37);
            tong = tong + (n-32)/100*25;
        }
        if(n > 52)
        {
            printf("20.000 5.000(25%c)", 37);
            tong = tong + 5;
        }
    }
    if(n>=52)
    {
        printf("\n");
        if(n <= 80)
        {
            printf("%.3lf %.3lf(30%c)", n-52, (n-52)/100*30, 37);
            tong = tong +(n-52)/100*30;
        }
        if(n > 80)
        {
            printf("32.000 8.400(30%c)",37);
            tong = tong+8.4;
        }
    }
    if(n>80)
    {
        printf("\n");
        printf("%.3lf %.3lf(35%c)", n-80, (n-80)/100*35,37);
        tong = tong + (n-80)/100*35;
    }
    printf("\nTONG THUE %.3lf", tong);
    return 0;
}
