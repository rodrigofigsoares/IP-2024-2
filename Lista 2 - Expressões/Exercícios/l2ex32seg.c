#include <stdio.h>
#define crescente 1
#define decrescente -1
#define desordenada 0

int main() {
    int n, i, sequencia;
    double k, anterior;
    
    while(1)
    {
        scanf("%d", &n);
        if(n <= 0) break;
        else
        {
            scanf("%lf", &anterior);
            scanf("%lf", &k);
            if(k > anterior) sequencia = crescente;
            else if(k < anterior) sequencia = decrescente;
            else if(k == anterior) sequencia = desordenada;

            anterior = k;

            for(i=0;i<n-2;i++)
            {
                scanf("%lf", &k);
                if(k > anterior && sequencia == crescente)
                {
                    sequencia = desordenada;
                }
                else if(k > anterior && sequencia == decrescente)
                {
                    anterior = k;
                    sequencia = crescente;
                }
                else if(k < anterior && sequencia == crescente)
                {
                    anterior = k;
                    sequencia = decrescente;
                }
                else if(k < anterior && sequencia == decrescente)
                {
                    sequencia = desordenada;
                }
                else if(sequencia == desordenada) sequencia = desordenada;
            }
        }
        if(sequencia == crescente || sequencia == decrescente) printf("Intercalada\n");
        else if(sequencia == desordenada) printf("Nao intercalada\n");
    }
    return 0;
}