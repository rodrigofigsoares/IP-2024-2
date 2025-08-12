#include <stdio.h>

int calc_binario(int decimal) {
    int binario = 0, resto, i = 1;
    while(decimal > 0)
    {
        resto = decimal%2;
        binario += resto*i;
        decimal /= 2;
        i *= 10;
    }
    return binario;
}

int main() {
    int decimal, binario;
    while(scanf("%d", &decimal) != EOF)
    {
        binario = calc_binario(decimal);
        printf("%d\n", binario);
    }
    return 0;
}