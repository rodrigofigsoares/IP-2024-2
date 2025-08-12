#include <stdio.h>
#include <stdlib.h>

void ordena(int * ordem, int tam) {
    int i, j, temp, menor, id;
    for(i=0;i<tam;i++)
    {
        menor = ordem[i];
        for(j=i+1;j<tam;j++) if(ordem[j] < menor)
        {
            menor = ordem[j];
            id = j;
        }
        temp = ordem[i];
        ordem[i] = menor;
        ordem[id] = temp;
    }
}

int main(int argc, char ** argv) {
    if(argc != 3)
    {
        printf("Entrada Invalida!\n");
        printf("Tente: ./ordenaseq <arq_entrada> <arquivo_saida>\n");
        return 0;
    }
    FILE * arq_entrada = fopen(argv[1], "w");
    int n, i, num;
    int * ordem = (int*)malloc(n*sizeof(int));
    printf("Quantos numeros serao lidos?\n");
    printf("Resposta: ");
    scanf("%d", &n);
    printf("Informe os numeros para que sejam ordenados:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &num);
        fprintf(arq_entrada, "%d\n", num);
    }
    fclose(arq_entrada);
    arq_entrada = fopen(argv[1], "r");
    FILE * arq_saida = fopen(argv[2], "w");
    for(i=0;i<n;i++) fscanf(arq_entrada, "%d%*c", &ordem[i]);
    ordena(ordem, n);
    for(i=0;i<n;i++) fprintf(arq_saida, "%d\n", ordem[i]);
    fclose(arq_entrada);
    fclose(arq_saida);
    free(ordem);
    return 0;
}