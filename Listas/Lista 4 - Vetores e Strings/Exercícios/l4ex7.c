#include <stdio.h>
#include <string.h>

#define N 10

void printSemZero(char * numero, unsigned long long int tamanho) {
    while(tamanho--)
    {
        if(*numero != '0') printf("%c", *numero);
        numero++;
    }
    printf("\n");
}

int main() {
    unsigned long long int n, m, soma, size;
    char num[N+1];
    while(1)
    {
        scanf("%llu%llu", &n, &m);
        if(m == 0 && n == 0) break;
        soma = n + m;
        sprintf(num, "%llu", soma);
        size = strlen(num);
        printSemZero(num, size);
    }
    return 0;
}