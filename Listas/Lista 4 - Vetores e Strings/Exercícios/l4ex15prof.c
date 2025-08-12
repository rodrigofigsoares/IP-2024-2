#include <stdio.h>
#include <string.h>

#define N 99998

void str_mirror(char str[]) {
    /*
    size = 0;
    while(str[size] != '\0') size++;
    */
    int size = strlen(str); // função que faz o descrito acima
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
    char str[N+1], temp[6];
    int I, F, size, i, k;
    scanf("%d", &k);
    for(i=0;i<k;i++)
    {
        str[0] = '\0'; // esvaziando a string para remover lixo de memoria
        scanf("%d%d", &I, &F);
        for( ;I<=F;I++)
        {
            sprintf(temp, "%d", I); // coloca os valores inteiros dentro da string
            strcat(str, temp); // concatena a string (une as strings)
        }
        str_mirror(str);
        printf("%s\n", str);
    }
    return 0;
}