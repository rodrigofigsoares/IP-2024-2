#include <stdio.h>

#define N 499

int findch(char ch, char * str) {
    int i = 0;
    while(str[i] && str[i] != ch)
    {
        i++;
    }
    if(!str[i]) return -1;
    return i;
}

int main() {
    int n, indice;
    scanf("%d%*c", &n);
    char str[N+1], ch;
    while(n--)
    {
        scanf("%c%*c%[^\n]%*c", &ch, str);
        indice = findch(ch, str);
        if(indice == -1) printf("Caractere %c nao encontrado.\n", ch);
        else printf("Caractere %c encontrado no indice %d da string.\n", ch, indice);
    }
    return 0;
}