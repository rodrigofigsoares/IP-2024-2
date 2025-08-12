#include <stdio.h>
#include <math.h>

int main() {
    float h, a;
    float V, Ah;

    scanf("%f%f", &h, &a);

    Ah = (3*a*a*sqrt(3))/2;
    V = (Ah*h)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", V);
    return 0;
}