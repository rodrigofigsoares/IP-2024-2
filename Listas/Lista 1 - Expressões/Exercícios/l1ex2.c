#include <stdio.h>

int main() {
    float F, C;
    float P, m;
    scanf("%f", &F);
    scanf("%f", &P);

    C = 5*(F-32)/9;
    m = P*25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", C);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", m);

    return 0;
}