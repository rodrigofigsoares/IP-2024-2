#include <stdio.h>

int main() {
    int n, soma = 0, d = 1, i;
    scanf("%d", &n);

    printf("%d = ", n);

    for(i=0;i<n;i++)
    {
        if(n%d == 0) 
        {
            if(d == 1)
            {
                if(d<n)
                {
                    soma += d;
                    printf("%d ", d);
                }
            }
            else if(d > 1)
            {
                if(d<n)
                {
                    soma += d;
                    printf("+ %d ", d);
                }
            }
        }
            d++;
    }

    printf("= %d", soma);

    if(soma == n) printf(" (NUMERO PERFEITO)\n");
    else printf(" (NUMERO NAO E PERFEITO)\n");
    return 0;
}