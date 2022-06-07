#include <stdio.h>
char s[55][55];

int main()
{
    int n;
    int dem=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(s[i][j]!='0'){
                dem++;
                for(int x=0;x<=i;x++){
                    for(int y=0;y<=j;y++){
                        if(s[x][y]=='0'){s[x][y]='1';}
                        else if(s[x][y]=='1'){s[x][y]='0';}
                    }
                }
            }
        }
    }
    printf("%d",dem);
}

