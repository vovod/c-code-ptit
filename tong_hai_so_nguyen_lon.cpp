#include <stdio.h>
#include <string.h>

char xau1[1005];
char xau2[1005];
char xau3[1005];
char xau4[1005];
int a[10005];
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--){
        scanf("%s",xau1);
        scanf("%s",xau2);
        int dai1=strlen(xau1)-1;
        int dai2=strlen(xau2)-1;
        int tang=0;
        while(dai1<dai2){
	        for(int i=dai1+1;i>=0;i--){
                if(i==0){xau1[i]='0'; break;}
                xau1[i]=xau1[i-1];
            }
            dai1++;
        }
        while(dai2<dai1){
	        for(int i=dai2+1;i>=0;i--){
                if(i==0){xau2[i]='0'; break;}
                xau2[i]=xau2[i-1];
            }
            dai2++;
        }
        
        for(int i=0; i<=dai1;i++){
            xau3[dai1-i] = xau1[i];
        }
        for(int i=0; i<=dai2;i++){
            xau4[dai1-i] = xau2[i];
        }
        
        int max=dai1;
        if(dai1<dai2) max=dai2;
        int dem=0;
        int dem1=0;
        for(int i=0;i<=max;i++){
            if(xau3[i]=='\0'||xau4[i]=='\0'){break;}
            int sum=xau3[i]+xau4[i]-'0'-'0'+dem;
            if(sum>=10&&i!=max){sum=sum-10; dem=1;}
            else if(i==max){sum=sum;}
            else{dem=0;}
            a[i]=sum; dem1++;
        }
        for(int i=dem1-1;i>=0;i--){
            printf("%d",a[i]);
        }
        printf("\n");
    }
}


