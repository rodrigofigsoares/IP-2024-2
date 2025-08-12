#include <stdio.h>

int main() {
    int n, soma = 0, i, maior;

    for(i=0;i<4;i++)
    {
        scanf("%d", &n);
        if(n>maior)
        {
            maior = n;
        }
        soma += n;
    }
    printf("%d\n", soma-maior);
    return 0;
}