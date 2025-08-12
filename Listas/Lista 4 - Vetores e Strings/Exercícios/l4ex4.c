#include <stdio.h>
#include <string.h>

#define N 101

unsigned long long int analisa_palavra(char * numeros, int tamanho) {
    int i;
    unsigned long long int soma = 0;
    for(i=0;i<tamanho;i++)
    {
        switch(*numeros)
        {
            case '1':
                soma += 2;
                break;
            case '2':
            case '3':
            case '5':
                soma += 5;
                break;
            case '4':
                soma += 4;
                break;
            case '6':
            case '9':
            case '0':
                soma += 6;
                break;
            case '7':
                soma += 3;
                break;
            case '8':
                soma += 7;
                break;
        }
        numeros++;
    }
    return soma;
}
int main() {
    int n, tamanho, qtdLeds;
    scanf("%d%*c", &n);
    char numeros[N+1];
    while(n--)
    {
        scanf("%[^\n]%*c", numeros);
        tamanho = strlen(numeros);
        qtdLeds = analisa_palavra(numeros, tamanho);
        printf("%d leds\n", qtdLeds);
    }
    return 0;
}