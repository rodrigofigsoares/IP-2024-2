#include <stdio.h>
#include<string.h>
    
#define N 10000
    
void analisa_palavra(char * v, int tamanho) {
    int i, letras = 0, vogais = 0, consoantes = 0;
    for(i=0;i<tamanho;i++)
    {
        if((*v > 64 && *v < 91) || (*v > 96 && *v < 123))
        {
            letras++;
            if(*v == 'A' || *v == 'a' || *v == 'E' || *v == 'e' || *v == 'I' || *v == 'i' || *v == 'O' || *v == 'o' || *v == 'U' || * v == 'u') vogais++;
            else consoantes++;
        }
        v++;
    }
    printf("Letras = %d\n", letras);
    printf("Vogais = %d\n", vogais);
    printf("Consoantes = %d\n", consoantes);
}
    
int main() {
    int n, i, tamanho;
    char v[N];
    scanf("%d%*c", &n);
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]%*c", v);
        tamanho = strlen(v);
        analisa_palavra(v, tamanho);
    }
    return 0;
}