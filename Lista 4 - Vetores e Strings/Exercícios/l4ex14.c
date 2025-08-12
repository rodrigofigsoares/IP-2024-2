#include <stdio.h>

int main() {
    int n, i, j, indice, nao;
    char ch, chStr, temp;
    scanf("%d%*c", &n);
    for(i=0;i<n;i++)
    {
        indice = 0;
        nao = 0;
        scanf("%c%*c", &ch);
        while(1)
        {
            scanf("%c", &chStr);
            if(chStr == '\n')
            {
                printf("Caractere %c nao encontrado.\n", ch);
                nao++;
                break;
            }
            if(chStr == ch)
            {
                while(1)
                {
                    scanf("%c", &temp);
                    if(temp == '\n') break;
                }
                break;
            }
            else indice++;
        }
        if(nao == 0) printf("Caractere %c encontrado no indice %d da string.\n", ch, indice);
    }
}