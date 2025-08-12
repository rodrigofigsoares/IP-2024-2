#include <stdio.h>

int main() {
    int n, div = 2, contador = 0;
    scanf("%d", &n);
    if(n < 2)
    {
        while(n < 2)
        {
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
            scanf("%d", &n);
        }
    }
    printf("%d = ", n);
    while(n > 1)
    {
        if(n%div == 0 && contador == 0)
        {
            n /= div;
            printf("%d", div);
            contador++;
        }
        else if(n%div == 0 && contador > 0)
        {
            n /= div;
            printf(" x %d", div);
        }
        else div++;
    }
    printf("\n");
    return 0;
}