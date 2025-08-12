#include <stdio.h>
#include <math.h>
    
int raizes(double a, double b, double c) {
    double delta;
    delta = b*b - 4*a*c;
    if(delta > 0) return 2;
    if(delta == 0) return 1;
    if(delta < 0) return 0;
}
int main() {
    double a, b, c, x1, x2, delta, temp;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = b*b - 4*a*c;
    if(raizes(a, b, c) == 2)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        if(x1 > x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    
    }
    if(raizes(a, b, c) == 1)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    }
    if(raizes(a, b, c) == 0) printf("RAIZES IMAGINARIAS\n");
    return 0;
}