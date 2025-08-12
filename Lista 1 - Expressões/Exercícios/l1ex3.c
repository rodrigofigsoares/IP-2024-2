#include <stdio.h>

int main() {
    float raio, altura;
    float pi;
    float areaC, areaL, areaT, custo;
    scanf("%f", &raio);
    scanf("%f", &altura);

    pi = 3.14159;
    areaC = pi*raio*raio;
    areaL = 2*pi*raio*altura;
    areaT = 2*areaC + areaL;
    custo = areaT*100;

    printf("O VALOR DO CUSTO E = %.2f\n", custo);
    return 0;
}