#include <stdio.h>
#include <string.h>
    
#define N 256
    
void remove_vogais(char * str, int * qtdVogais) {
    int i, j, k = 0, tam, totalVogais;
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    tam = strlen(str);
    while(1)
    {
        for(i=0;i<tam;i++)
        {
            if(str[i] == vogais[j] || str[i] == vogais[j] - 32)
            {
                qtdVogais[j]++;
                str[i] = '\n';
            }
        }
        j++;
        if(j == 5) break;
    }
    totalVogais = qtdVogais[0] + qtdVogais[1] + qtdVogais[2] + qtdVogais[3] + qtdVogais[4]; 
    i = 0;
    while(1)
    {
        if(str[k] == '\0')
        {
            str[i] = '\0';
            break;
        }
        if(str[k] == '\n') k++;
        else
        {
            str[i] = str[k];
            i++;
            k++;
        }
    }
}
    
int main() {
    char str[N+1];
    int qtdVogais[5] = {0, 0, 0, 0, 0};
    int i = 0, j, k, wasRemoved, tam;
    scanf("%[^\n]%*c", str);
    tam = strlen(str);
    remove_vogais(str, qtdVogais);
    printf("%s\n", str);
    printf("a: %d\n", qtdVogais[0]);
    printf("e: %d\n", qtdVogais[1]);
    printf("i: %d\n", qtdVogais[2]);
    printf("o: %d\n", qtdVogais[3]);
    printf("u: %d\n", qtdVogais[4]);
    return 0;
}