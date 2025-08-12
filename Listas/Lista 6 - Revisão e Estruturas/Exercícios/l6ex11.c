#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int moradores, consumo;
} residencia;

void ordena_consumo(residencia * res, int tam) {
    int i, j, id, menor, temp;
    for(i=0;i<tam-1;i++)
    {
        menor = res[i].consumo;
        for(j=i+1;j<tam;j++)
        {
            if(res[j].consumo < menor)
            {
                menor = res[j].consumo;
                id = j;
            }
        }
        temp = res[i].consumo;
        res[i].consumo = menor;
        res[id].consumo = temp;
        temp = res[i].moradores;
        res[i].moradores = res[id].moradores;
        res[id].moradores = temp;
    }
}

int main() {
    int n, i, j, cidade = 0;
    double consumo_total, total_pessoas, consumo_medio;
    residencia * res;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        cidade++;
        consumo_total = 0;
        total_pessoas = 0;
        for(i=0;i<n;i++)
        {
            res = (residencia*)malloc(n*sizeof(residencia));
            printf("Cidade# %d:\n", cidade);
            for(j=0;j<n;j++)
            {
                scanf("%d%d", &res[j].moradores, &res[j].consumo);
                consumo_total += res[j].consumo;
                total_pessoas += res[j].moradores;
            }
            ordena_consumo(res, n);
            for(j=0;j<n;j++)
            {
                if(j == n-1) printf("%d-%d\n", res[j].moradores, res[j].)
            }
            consumo_medio = consumo_total/total_pessoas;
            printf("Consumo medio: %.2lfm3.\n", consumo_medio);
            free(res);
        }
    }
    return 0;
}