#include <stdio.h>
#define N 100000
#define M 1000

int main() {
    int total[N], buscas[M], qtdTotal, qtdBuscas, i, n, j, achou = 0;
    scanf("%d", &qtdTotal);
    if(qtdTotal > N || qtdTotal < 1)
    {
        printf("Valor Invalido\n");
        return 0;
    }
    for(i=0;i<qtdTotal;i++)
    {
        scanf("%d", &total[i]);
    }
    scanf("%d", &qtdBuscas);
    if(qtdBuscas > M || qtdBuscas < 1)
    {
        printf("Valor Invalido\n");
        return 0;
    }
    for(j=0;j<qtdBuscas;j++)
    {
        scanf("%d", &buscas[j]);
        for(i=0;i<qtdTotal;i++)
        {
            if(total[i] == buscas[j])
            {
                achou = 1;
                i = qtdTotal;
            }
        }
        if(achou == 1) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
        achou = 0;
    }
    return 0;
}