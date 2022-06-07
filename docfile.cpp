#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp = NULL;
    char arr[128];
    int dem = 0;
    fp = fopen("tstFPL20220528.fpl", "r");
    while (fgets(arr, 128, fp) != NULL)
    {
        if(arr[0]=='B'&&('0'<=arr[1]<='9')&&('0'<=arr[2]<='9')&&arr[3]=='D'&&arr[4]=='C'&&('A'<=arr[5]<='Z')&&('A'<=arr[6]<='Z')&&('0'<=arr[7]<='9')&&('0'<=arr[8]<='9')&&('0'<=arr[8]<='9')) dem++;
    }
    fclose(fp);
    printf("%d",dem);
    return 0;
}
