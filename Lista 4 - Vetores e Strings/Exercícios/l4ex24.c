#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 128

long int string2int(const char * str) {
    int tam, i = 1, num = 0;
    tam = strlen(str);
    for(tam-=1;tam>=0;tam--)
    {
        if(str[tam] == 45) num *= -1;
        else
        {
            num += (int)(str[tam]-48) * i;
            i *= 10;
        }
    }
    return num;
}

int main() {
    char str[N+1];
    long int n;
    while(scanf("%s", str) != EOF)
    {
        n = string2int(str);
        printf("%ld %ld\n", n, n*2);
    }
    return 0;
}