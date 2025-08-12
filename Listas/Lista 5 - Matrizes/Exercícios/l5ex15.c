#include <stdio.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64

int str_split(char M[][MAX_WORD_LEN+1], char str[], char sep[]) {
    int i = 0, j, k, tam = 0, contador = 0, verify;
    int sizeStr, sizeSep;
    // int M[MAX_WORDS][MAX_WORD_LEN+1];
    sizeStr = strlen(str);
    sizeSep = strlen(sep);
    while(contador < sizeStr)
    {
        verify = 0;
        for(k=0;k<sizeSep;k++)
        {
            if(*str == sep[k])
            {
                if((*(str-1) > 64 && *(str-1) < 91) || (*(str-1) > 96 && *(str-1) < 123))
                {
                    str -= tam;
                    for(j=0;j<tam;j++)
                    {
                        M[i][j] = (char)*str;
                        str++;
                    }
                    M[i][j] = '.';
                    tam = 0;
                    i++;
                }
                verify = 1;
                break;
            }
        }
        str++;
        if(verify == 0) tam++;
        contador++;
    }
    return i;
}

int maior_palavra(char M[][MAX_WORD_LEN+1], int qtd) {
    int i, j, maior = 0;
    for(i=0;i<qtd;i++)
    {
        j = 0;
        while(1)
        {
            if(M[i][j] == '.') break;
            j++;
        }
        if(j > maior)
        {
            maior = j;
        }
    }
    return maior;
}

int qtdMaior(char M[][MAX_WORD_LEN+1], int qtd, int maior) {
    int i, j, contador = 0;
    for(i=0;i<qtd;i++)
    {
        j = 0;
        while(1)
        {
            if(M[i][j] == '.') break;
            j++;
        }
        if(j == maior) contador++;
    }
    return contador;
}

void print_palavras(char M[][MAX_WORD_LEN+1], int qtdPalavras) {
    int i, j, k;
    for(i=0;i<qtdPalavras;i++)
    {
        k = 0;
        j = 0;
        while(1)
        {
            if(M[i][j] == '.') break;
            j++;
            k++;
        }
        printf("(%d)", k);
        for(j=0;j<k;j++)
        {
            printf("%c", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char str[MAX_WORDS], sep[MAX_WORD_LEN];
    char M[MAX_WORDS][MAX_WORD_LEN+1];
    int qtdPalavras, tamMaior, qtd;
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", sep);
    qtdPalavras = str_split(M, str, sep);
    tamMaior = maior_palavra(M, qtdPalavras);
    qtd = qtdMaior(M, qtdPalavras, tamMaior);
    print_palavras(M, qtdPalavras);
    printf("%d\n", qtd);
    return 0;
}