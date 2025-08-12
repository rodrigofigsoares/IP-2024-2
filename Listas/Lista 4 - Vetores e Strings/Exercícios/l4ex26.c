#include <stdio.h>

void mega_sena(int * correct, int * aposta, int * resultados) {
    int i, j, qtd = 0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(aposta[j] == correct[i])
            {
                qtd++;
                break;
            }
        }
    }
    if(qtd == 6) resultados[0]++;
    if(qtd == 5) resultados[1]++;
    if(qtd == 4) resultados[2]++;
}

int main() {
    int n, i;
    int correct[6], aposta[6], resultados[3];
    for(i=0;i<3;i++) resultados[i] = 0;
    for(i=0;i<6;i++) scanf("%d", &correct[i]);
    scanf("%d", &n);
    while(n--)
    {
        for(i=0;i<6;i++) scanf("%d", &aposta[i]);
        mega_sena(correct, aposta, resultados);
    }
    if(resultados[0] == 0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n", resultados[0]);
    if(resultados[1] == 0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n", resultados[1]);
    if(resultados[2] == 0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", resultados[2]);
    return 0;
}