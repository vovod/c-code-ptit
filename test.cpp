#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define s " "

int main() {
	int i;
    char str1[100];
	gets(str1);
    strlwr(str1);    
    char *s1,s2[100];
    for (i=strlen(str1)-1;i>=0;i--)
    if (str1[i]==' ') 
	{
    	strcpy(s2,&str1[i+1]);
    	break;
    }   
    s1 = strtok(str1,s);
    while(s1!=NULL) 
	{
    	if (strcmp(s1,s2)) 
    		printf("%c",s1[0]);
      	s1 = strtok(NULL,s);
    }
    printf("%s",s2);
    printf("@ptit.edu.vn");
    return 0;
}
