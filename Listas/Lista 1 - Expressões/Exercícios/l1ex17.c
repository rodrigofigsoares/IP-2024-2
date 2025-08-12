#include <stdio.h>

int main() {
    int valor;
    int cem, cinquenta, dez, um;
    int r1, r2, r3;
    scanf("%d", &valor);

    cem = valor/100;
    r1 = valor%100;
    cinquenta = r1/50;
    r2 = r1%50;
    dez = r2/10;
    r3 = r2%10;
    um = r3;

    printf("NOTAS DE 100 = %d\n", cem);
    printf("NOTAS DE 50 = %d\n", cinquenta);
    printf("NOTAS DE 10 = %d\n", dez);
    printf("MOEDAS DE 1 = %d\n", um);

    return 0;
}