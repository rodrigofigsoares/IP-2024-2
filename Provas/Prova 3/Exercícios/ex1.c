#include <stdio.h>
#include <stdlib.h>
    
typedef struct {
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;
} FUNCIONARIO;
    
double calc_media_idades(FUNCIONARIO * worker, int qtd) {
    int i;
    double media = 0;
    for(i=0;i<qtd;i++) media += worker[i].idade;
    media /= qtd;
    return media;
}
    
double calc_media_filhos(FUNCIONARIO * worker, int qtd) {
    int i;
    double media = 0;
    for(i=0;i<qtd;i++) media += worker[i].numFilhos;
    media /= qtd;
    return media;
}
    
int main() {
    int n, i, qtd_idade_superior = 0, qtd_mulheres_filhos = 0, qtd_homens_filhos = 0, qtd_renda_percapita = 0;
    double media_idades, media_filhos;
    scanf("%d", &n);
    FUNCIONARIO * worker = (FUNCIONARIO*)malloc(n*sizeof(FUNCIONARIO));
    for(i=0;i<n;i++) scanf("%d%d%d%*c%c%lf", &worker[i].matricula, &worker[i].idade, &worker[i].numFilhos, &worker[i].sexo, &worker[i].salario);
    media_idades = calc_media_idades(worker, n);
    media_filhos = calc_media_filhos(worker, n);
    for(i=0;i<n;i++)
    {
        if(worker[i].idade > media_idades && worker[i].salario > 3600) qtd_idade_superior++;
        if(worker[i].sexo == 'F' && worker[i].numFilhos > media_filhos) qtd_mulheres_filhos++;
        if(worker[i].sexo == 'M' && worker[i].numFilhos > media_filhos) qtd_homens_filhos++;
        if(worker[i].idade > 47 && worker[i].salario/(worker[i].numFilhos+1) < 2400) qtd_renda_percapita++;
    }
    printf("%d %d %d %d\n", qtd_idade_superior, qtd_mulheres_filhos, qtd_homens_filhos, qtd_renda_percapita);
    free(worker);
    return 0;
}