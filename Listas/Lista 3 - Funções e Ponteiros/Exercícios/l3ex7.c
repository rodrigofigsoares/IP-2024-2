#include <stdio.h>

void converter(unsigned char decimal) {
    int peso = 128;
    while(peso > 0)
    {
        printf("%d", decimal/peso);
        decimal %= peso;
        peso /= 2;
    }
}

void print_bytes(void * valor, int qtdBytes) {
    char * num = valor;
    int i;
    for(i=0;i<qtdBytes;i++)
    {
        converter(*num);
        num++;
        printf(" ");
    }
}

int main() {
    double d;
    scanf("%lf", &d);
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float f;
    uc = us = ui = f = d;
    print_bytes(&uc, sizeof(char));
    printf("\n");
    print_bytes(&us, sizeof(short));
    printf("\n");
    print_bytes(&ui, sizeof(int));
    printf("\n");
    print_bytes(&f, sizeof(float));
    printf("\n");
    print_bytes(&d, sizeof(double));
    printf("\n");
    return 0;
}