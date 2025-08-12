#include <stdio.h>

int main() {
    unsigned int n, i = 2, div = 1, soma = 0, soma2 = 0, contador = 0;
    scanf("%d", &n);

    while(1)
    {
        while(div < i)
        {
            if(i%div == 0)
            {
                soma += div;
                div++;
            }
            else div++;
        }
        if(div == i)
        {
            div = 1;
            while(div < soma)
            {
                if(soma%div == 0)
                {
                    soma2 += div;
                    div++;
                }
                else div++;
            }
        }
        if(i == soma2)
        {
            printf("(%d,%d)\n", i, soma);
            contador++;
            if(contador == n) break;
        }
        soma = 0;
        soma2 = 0;
        i++;
        div = 1;
    }

    return 0;
}