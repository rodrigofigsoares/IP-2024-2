#include <stdio.h>

int cancel(int alunos[], int totalAlunos, int minPresentes) {
    int i, qtd = 0;
    for(i=0;i<totalAlunos;i++) if(alunos[i] <= 0) qtd++;
    if(qtd >= minPresentes) return qtd;
    else return 0;
}

int main() {
    int n, k, temp, qtdPresentes;
    scanf("%d%d", &n, &k);
    int alunos[n];
    temp = n;
    while(temp--) scanf("%d", &alunos[temp]);
    qtdPresentes = cancel(alunos, n, k);
    if(qtdPresentes >= k)
    {
        printf("NAO\n");
        temp = 0;
        while(qtdPresentes > 0) 
        {
            if(alunos[temp] <= 0)
            {
                printf("%d\n", n-temp);
                qtdPresentes--;
            }
            temp++;
        }
    }
    else printf("SIM\n");
    return 0;
}