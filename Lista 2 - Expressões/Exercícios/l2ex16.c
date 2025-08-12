#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, temp;
    double x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a == 0)
    {
        x1 = -c/b;
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf", x1);
    } else
    {
    delta = b*b + (-4*a*c);
    if(delta < 0)
    {
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }

    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);

    if(delta == 0)
    {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
        return 0;
    }
    
    if(delta > 0)
    {
        printf("RAIZES DISTINTAS\n");
        if(x2<x1)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
        return 0;
    }
    }
}