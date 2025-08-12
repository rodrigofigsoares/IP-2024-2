#include <stdio.h>
#define crescente 1
#define decrescente -1
#define desordenada 0

int main()
{
    int n, i, contador = 0, sequencia = 2;
    double k, anterior, anterior2;
    scanf("%d", &n);

    if (n == 1 || n == 2)
        return 0;

    while (n > 0)
    {
        if (n <= 0)
            return 0;
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &k);
            if (contador == 0)
                anterior = k;
            else if (contador == 1)
                anterior2 = k;
            contador++;
            if (contador == 3)
            {
                if (k < anterior2 && anterior2 > anterior)
                {
                    sequencia = crescente;
                    anterior = anterior2;
                    anterior2 = k;
                }
                else if (k > anterior2 && anterior2 < anterior)
                {
                    sequencia = decrescente;
                    anterior = anterior2;
                    anterior2 = k;
                }
                else
                {
                    sequencia = desordenada;
                }
            }
            if (sequencia == desordenada)
            {
                while (i < n - 1)
                {
                    scanf("%lf", &k);
                    i++;
                }
            }
            else if (contador > 3)
            {
                if (sequencia == crescente)
                {
                    if (k <= anterior2)
                    {
                        sequencia = desordenada;
                        break;
                    }
                    else
                    {
                        sequencia = decrescente;
                        anterior = anterior2;
                        anterior2 = k;
                    }
                }
                else if (sequencia == decrescente)
                {
                    if (k >= anterior2)
                    {
                        sequencia = desordenada;
                        break;
                    }
                    else
                    {
                        sequencia = crescente;
                        anterior = anterior2;
                        anterior2 = k;
                    }
                }
            }
        }
        if (n == 1 || n == 2)
            sequencia = crescente;
        if (sequencia == crescente || sequencia == decrescente)
            printf("Intercalada\n");
        else if (sequencia == desordenada)
            printf("Nao intercalada\n");
        scanf("%d", &n);
        contador = 0;
        if (n <= 0)
            return 0;
    }
    return 0;
}