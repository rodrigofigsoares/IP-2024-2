#include <stdio.h>
    
int main() {
    double n, e, rk, r0 = 1, erro;
    scanf("%lf%lf", &n, &e);
    
    rk = (r0 + (n / r0))/2.0;
    
    while(rk <= n)
    {
    erro = n - rk*rk;
    if(erro >= 0) erro = erro;
    else if(erro < 0) erro = -erro;
    printf("r: %.9lf, err: %.9lf\n", rk, erro);
    r0 = rk;
    rk = (r0 + (n / r0))/2.0;
    if(erro <= e) break;
    }
    
    return 0;
}