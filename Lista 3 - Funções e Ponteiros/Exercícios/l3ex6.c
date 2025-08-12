#include <stdio.h>
    
double absoluto(double erro) {
    if(erro >= 0) return erro;
    else return erro*-1;
}
double raiz(double n, double e) {
    double rk, r0 = 1, erro;
    rk = (r0 + n/r0)/2;
    erro = n - rk*rk;
    erro = absoluto(erro);
    while(erro > e)
    {
        printf("r: %.9lf, err: %.9lf\n", rk, erro);
        r0 = rk;
        rk = (r0 + n/r0)/2;
        erro = n - rk*rk;
        erro = absoluto(erro);
        if(erro < e) 
        {
            printf("r: %.9lf, err: %.9lf\n", rk, erro);
            break;
        }
    }
}
int main() {
    double n, e;
    scanf("%lf%lf", &n, &e);
    raiz(n, e);
    return 0;
}