#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float x, y;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    y = (a*f - d*c)/(a*e - d*b);
    x = (c - b*y)/a;

    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}