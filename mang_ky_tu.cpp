#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[10005];
    gets(s);
    int dem1 = 0, dem2 = 0, dem11 = 0, dem12 = 0, dem21 = 0, dem22 = 0, dem31 = 0, dem32 = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 39)
            dem1++;
        if (s[i] == '"')
            dem2++;
        if (s[i] == '(')
            dem11++;
        if (s[i] == ')')
            dem12++;
        if (s[i] == '[')
            dem21++;
        if (s[i] == ']')
            dem22++;
        if (s[i] == '{')
            dem31++;
        if (s[i] == '}')
            dem32++;
    }
    if (dem1 % 2 == 0 && dem2 % 2 == 0 && dem11 == dem12 && dem21 == dem22 && dem31 == dem32)
        printf("1");
    else
        printf("0");
}