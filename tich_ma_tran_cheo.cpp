#include<stdio.h> 
#include<math.h>
#include<string.h>

int main() { 
    int te;
    scanf("%d", &te);
    int dem = 1;
    while(te--)
    {
        int n;
        scanf("%d", &n);
        printf("Test %d:\n", dem);
        dem++;
        int a[20][20], b[20][20]={0}, c[20][20]={0};
        for(int i=0; i<n; i++)
        {
            int t=1;
            for(int j=0; j<n; j++)
            {
                if(j<=i) {
                    a[i][j]=t;
                    t++;
                } else a[i][j]=0;
            }
        }
        for (int i=0; i<n; i++) 
            for (int j=0; j<n; j++) 
                b[i][j] =a[i][j];
        for (int i=0; i<n; i++) 
        {
            for (int j=0; j<i; j++) 
            {
                int temp = b[i][j];
                b[i][j] = b[j][i];
                b[j][i] = temp;
            }
        }
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<n ; j++)
                for(int l=0 ; l<n ; l++)	
                    c[i][j]+=a[i][l]*b[l][j];
        for (int i=0; i<n; i++) 
        {
            for (int j=0; j<n; j++) 
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0; 
}
