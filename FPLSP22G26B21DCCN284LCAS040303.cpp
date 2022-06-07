//Nguyen Hai Duong
//B21DCCN284
//26
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void convert(char s[], int i) {
    switch (i)
    {
    case 0: strcpy(s, "zero"); break;
    case 1: strcpy(s, "one"); break;
    case 2: strcpy(s, "two"); break;
    case 3: strcpy(s, "three"); break;
    case 4: strcpy(s, "four"); break;
    case 5: strcpy(s, "five"); break;
    case 6: strcpy(s, "six"); break;
    case 7: strcpy(s, "seven"); break;
    case 8: strcpy(s, "eight"); break;
    case 9: strcpy(s, "nine"); break;
    case 10: strcpy(s, "ten"); break;
    }
}

int int_rand(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

float float_rand( float min, float max )
{
    
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}

int main() {
    time_t t;
    srand((unsigned) time(&t));
    int n = 0;
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("testData03.fpl", "w+");
    for(int i = 1; i <= n; i++) {
        int id = i;
        int ni = int_rand(0, 19);
        float fi = float_rand(0.0, 10.0);
        char ci = (char) int_rand(97, 122);
        char wi[1005];
        convert(wi, int_rand(0, 10));
        fprintf(fptr, "%d\t%d\t%f\t%c\t%s\n", i, ni, fi, ci, wi);
    }
    fclose(fptr);
    char s[128];
    fptr = fopen("testData03.fpl", "r");
    while(fgets(s, 128, fptr) != NULL) {
        printf("%s", s);
    }
}
