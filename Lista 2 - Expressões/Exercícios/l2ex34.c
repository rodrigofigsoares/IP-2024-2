#include <stdio.h>
#include <math.h>

int inteiro(double x){
    int k;
    k = x;
    if(k == x) return 1;
    else return 0;
}
int main() {
    double n, temp;
    unsigned long long int intNum, den = 1;
    int limite, div = 2;
    scanf("%lf", &n);
    temp = n;
    temp *= 10;
    while(1)
    {
        if(inteiro(n) == 1) break;
        else
        {
            n *= 10;
            den *= 10;
        }
    }
    intNum = n;
    if(intNum > den)
    {
        limite = den;
    } else limite = intNum;

    while(1)
    {
        if(div > limite) break;
        if(intNum%div == 0 && den%div == 0)
        {
            intNum /= div;
            den /= div;
            div++;
        }
        else div++;
    }
    printf("%llu/%llu\n", intNum, den);

    return 0;
}