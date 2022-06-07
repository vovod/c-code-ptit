#include <stdio.h>
#include <string.h>
char xau1[1005];
char xau2[1005];
int a[255] = {0};
int b[255] = {0};
int c[255] = {0};
int main()
{
    int dem=0;
    gets(xau1);
    gets(xau2);
    int dai1=strlen(xau1)-1;
    int dai2=strlen(xau2)-1;

    for(int i=0;i<=dai1;i++){
        if(b[(int)xau1[i]]!=0){continue;}
        a[(int)xau1[i]]++;
        b[(int)xau1[i]]++;
    }
    
    for(int i=0;i<=dai1;i++){
        for(int j=0;j<=dai2;j++){
            if(xau1[i]==xau2[j]){a[(int)xau1[i]]++;}
        }
    }
    
    for(int i=0;i<=255;i++){
        if(a[i]!=0){
            printf("%c",a[i]);
        }
    }
}

