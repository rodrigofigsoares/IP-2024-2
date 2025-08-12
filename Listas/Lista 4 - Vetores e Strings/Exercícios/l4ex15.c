#include <stdio.h>
#include <string.h>

#define N 999998 // qtd de caracteres max (de 1 até 12221 + espelhado)

void str_mirror(char * str) {
    int size = strlen(str);
    int esq, dir;
    dir = size;
    for(esq=size-1;esq>=0;esq--)
    {
        str[dir] = str[esq];
        dir++;
    }
    str[dir] = '\0';
}

int main() {
    int n, I, F;
    char str[N+1], temp[6]; // 6 pq um número tem no max 5 caracteres + '\0'
    scanf("%d", &n);
    while(n--)
    {
        str[0] = '\0';
        scanf("%d%d", &I, &F);
        for( ;I<=F;I++)
        {
            sprintf(temp, "%d", I); // le um valor inteiro em uma string
            strcat(str, temp); // concatena (une) as strings
        }
        str_mirror(str);
        printf("%s\n", str);
    }
    return 0;
}