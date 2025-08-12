#include <stdio.h>
#include <math.h>
#include <string.h>

#define N 128

double string2double(const char * str) {
    int i = 0, noDot, tam, k = 1, neg = 0;
    double num;
    tam = strlen(str);
    for(noDot=0;noDot<tam;noDot++)
    {
        if(str[noDot] == '.') break;
    }
    if(str[0] == '-')
    {
        neg = 1;
        i++;
        noDot--;
    }
    while(noDot)
    {
        num += (int)(str[i]-48) * pow(10, noDot-1);
        i++;
        noDot--;
    }
    if(str[i] == '.') i++;
    while(i<tam)
    {
        num += (int)(str[i]-48) * (1/pow(10, k));
        k++;
        i++;
    }
    if(neg == 1) num = -num;
    return num;
}

int main() {
    char str[N+1];
    double n;
    while(scanf("%s", str) != EOF)
    {
        n = string2double(str);
        printf("%.3lf %.3lf\n", n, 2*n);
    }
    return 0;
}