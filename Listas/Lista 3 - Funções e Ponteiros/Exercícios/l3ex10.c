#include <stdio.h>
    
double compute_pi(double qtd) {
    double pi = 1, num = 2, den = 1;
    int i = 0;
    while(1)
    {
        pi *= num/den;
        if(num > den) den += 2;
        else num += 2;
        i++;
        if(i == qtd) break;
    }
    return pi;
}
int main() {
    double n;
    scanf("%lf", &n);
    printf("%.12lf\n", 2*compute_pi(n));
    return 0;
}