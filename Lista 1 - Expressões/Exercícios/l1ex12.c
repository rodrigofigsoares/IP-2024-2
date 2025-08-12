#include <stdio.h>

int main() {

    double m, a, t;
    double v, S, W;
    double v2;
    scanf("%lf", &m);
    scanf("%lf", &a);
    scanf("%lf", &t);

    S = a*t*t/2;
    v = a*t;
    W = (m/1000)*v*v/2*1000000;
    v2 = v*3.6;

    printf("VELOCIDADE = %.2lf\n", v2);
    printf("ESPACO PERCORRIDO = %.2lf\n", S);
    printf("TRABALHO REALIZADO = %.2lf\n", W);

    return 0;
}