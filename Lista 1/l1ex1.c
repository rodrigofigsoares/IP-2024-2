#include <stdio.h>

int main() {
    double salary, kW;
    double custoKW, custoConsumo, custoDesconto;
    scanf("%lf%lf", &salary, &kW);

    custoKW = salary*0.7*0.01;
    custoConsumo = kW*custoKW;
    custoDesconto = custoConsumo*0.9;

    printf("Custo por kW: R$ %.2lf\n", custoKW);
    printf("Custo do consumo: R$ %.2lf\n", custoConsumo);
    printf("Custo com desconto: R$ %.2lf\n", custoDesconto);

    return 0;
}