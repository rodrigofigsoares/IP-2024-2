#include <stdio.h>


unsigned long long int fatorial(unsigned long long int f) {
    unsigned long long int fat = 1;
    while(f > 0)
    {
    fat *= f;
    f--;
    }
    return fat;
}
int main() {
    double expoente, x = 1, soma = 0;
    unsigned long long int n, k = 0, fator;
    scanf("%lf%llu", &expoente, &n);

    while(k <= n)
    {
        fator = fatorial(k);
        soma += x/fator;
        x *= expoente;
        k++;
    }
    printf("e^%.2lf = %.6lf\n", expoente, soma);
    return 0;
}