#include <stdio.h>
    
int somaDivisores(int x) {
    int soma = 0, div = 1;
    while(div <= x/2)
    {
        if(x%div == 0) soma += div;
        div++;
    }
    return soma;
}
int main() {
    int n, div = 2;
    scanf("%d", &n);
    printf("%d = 1", n);
    while(div <= n/2)
    {
        if(n%div == 0) printf(" + %d", div);
        div++;
    }
    if(somaDivisores(n) == n) printf(" = %d (NUMERO PERFEITO)\n", n);
    else printf(" = %d (NUMERO NAO E PERFEITO)\n", somaDivisores(n));
    return 0;
}