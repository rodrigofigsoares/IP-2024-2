#include <stdio.h>

int main() {
    int n, F1, F2, k, i, anterior = 0, anterior2, somaAnterior;
    scanf("%d%d%d", &n, &F1, &F2);

    scanf("%d", &k);
    if(k == F1) printf("OK\n");
    else 
    {
        printf("Nao e Fibonacci\n");
        return 0;
    }
    scanf("%d", &k);
    if(k == F2) printf("OK\n");
    else 
    {
        printf("Nao e Fibonacci\n");
        return 0;
    }

    anterior2 = F1;
    anterior = F2;
    somaAnterior = anterior2 + anterior;

    for(i=0;i<n-2;i++)
    {
        scanf("%d", &k);
        if(k == somaAnterior)
        {
            printf("OK\n");
            anterior2 = anterior;
            anterior = k;
            somaAnterior = anterior2 + anterior;
        }
        else
        {
            printf("Nao e Fibonacci\n");
            return 0;
        }
    }
    printf("A serie informada e de Fibonacci\n");
    return 0;
}