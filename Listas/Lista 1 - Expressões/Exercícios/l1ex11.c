#include <stdio.h>

int main() {

    float price, perDist, perImp, Tprice;
    float x, y;
    scanf("%f", &price);
    scanf("%f", &x);
    scanf("%f", &y);

    perDist = x*price/100;
    perImp = y*price/100;
    Tprice = price+perDist+perImp;
    
    printf("O VALOR DO CARRO E = %.2f\n", Tprice);
    return 0;
}