#include <stdio.h>

int main() {

    int conta;
    float consumo, valor;
    char tipo;
    scanf("%d%f %c", &conta, &consumo, &tipo);

    switch(tipo)
    {
        case 'R':
            valor = 5 + 0.05*consumo;
            break;
        case 'C':
            if(consumo<=80) valor = 500;
            else valor = 500 + (consumo-80)*0.25;
            break;
        case 'I':
            if(consumo<=100) valor = 800;
            else valor = 800 + (consumo-100)*0.04;
            break;
    }

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valor);

    return 0;
}