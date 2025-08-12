#include <stdio.h>

int main() {
    int a, b, anos;
    scanf("%d%d", &a, &b);

    if (a >= b) return 0;

    anos = 0;

    while (a < b)
    {
        a = a + a*0.03;
        b = b + b*0.015;
        anos++;
    }

    printf("ANOS = %d\n", anos);
    return 0;
}