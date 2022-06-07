#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
  int heSo;
  int soMu;
} DATHUC;

DATHUC final[100];
int f = 0;
char str1[100], str2[100];

int sort(const void *a, const void *b)
{
  DATHUC *data_1 = (DATHUC *)a;
  DATHUC *data_2 = (DATHUC *)b;
  return (data_2->soMu - data_1->soMu);
}
int stringToNum(char s[])
{
  int tmp = 0, l = strlen(s);
  for (int i = 0; i < l; i++)
    tmp = tmp * 10 + (s[i] - '0');
  return tmp;
}
void reset(char s[])
{
  int tmp = strlen(s);
  for (int i = 0; i <= tmp; i++)
  {
    s[i] = '\0';
  }
}
void process(char str1[])
{
  int l = strlen(str1);
  char tmp[100] = "";
  DATHUC p;
  int j = 0;
  for (int i = 0; i < l; i++)
  {
    if (str1[i] >= '0' && str1[i] <= '9')
    {
      tmp[j] = str1[i];
      j++;
    }
    if (str1[i] == '*')
    {
      p.heSo = stringToNum(tmp);
      reset(tmp);
      j = 0;
    }
    if (str1[i] == '+' || i == l - 1)
    {
      p.soMu = stringToNum(tmp);
      reset(tmp);
      final[f++] = p;
      j = 0;
    }
  }
}
int main()
{
  int test;
   char s[5];
  scanf("%d", &test);
  gets(s);
  while (test--)
  {
    gets(str1);
    gets(str2);
    process(str1);
    process(str2);
    qsort(final, f - 1, sizeof(DATHUC), sort);
    for (int i = 0; i < f - 1; i++)
    {
      if (final[i].soMu == final[i + 1].soMu)
      {
        printf("%d*x^%d", final[i].heSo + final[i + 1].heSo, final[i].soMu);
        i++;
      }
      else
      {
        printf("%d*x^%d", final[i].heSo, final[i].soMu);
      }
      if (i < f - 1)
      {
        printf(" + ");
      }
      if(final[i].soMu==0){
        break;
      }
    }
    printf("\n");
    f=0;
  }
  //system("pause");
  return 0;
}
