#include <stdio.h>

#define N 1000

int ve_letra(char * vetor, int qtd) {
    int incorreto = 0, correto = 0, i;
    char v[6];
    for(i=0;i<qtd;i++)
    {
        v[i] = *vetor;
        vetor++;
    }
    if(qtd == 3)
    {
        if(v[0] == 'o' && (v[1] == 'n' || v[2] == 'e'))
        {
            printf("1");
            correto++;
        }
        else if(v[1] == 'n' && (v[0] == 'o' || v[2] == 'e'))
        {
            printf("1");
            correto++;
        }
        else if(v[2] == 'e' && (v[0] == 'o' || v[1] == 'n'))
        {
            printf("1");
            correto++;
        }
        else if(v[0] == 't' && (v[1] == 'w' || v[2] == 'o'))
        {
            printf("2");
            correto++;
        }
        else if(v[1] == 'w' && (v[0] == 't' || v[2] == 'o'))
        {
            printf("2");
            correto++;
        }
        else if(v[2] == 'o' && (v[0] == 't' || v[1] == 'w'))
        {
            printf("2");
            correto++;
        }
        else incorreto += 2;
    }
    else if(qtd == 5)
    {
        if(v[0] != 't') incorreto++;
        if(v[1] != 'h') incorreto++;
        if(v[2] != 'r') incorreto++;
        if(v[3] != 'e') incorreto++;
        if(v[4] != 'e') incorreto++;
    }
    if(incorreto >= 2) return 1;
    else if(correto >= 1) return 2;
    else if(incorreto < 2 && correto < 1) return 0;
}
int main() {
    int n, i, j, contador, result;
    scanf("%d%*c", &n);
    char v[6];
    for(i=0;i<n;i++)
    {
        j = 0;
        contador = 0;
        while(1)
        {
            scanf("%c", &v[j]);
            if(v[j] == '\n') break;
            contador++;
            j++;
        }
        result = ve_letra(v, contador);
        if(result == 1) contador++;
        else if(result == 2) printf("\n");
        else if(result == 0) printf("3\n");
    }
    return 0;
}