#include <stdio.h>
    
int main() {
    int qtd, i, time1, time2, contador = 1;
    scanf("%d", &qtd);
    
    time1 = 1;
    time2 = time1 + 1;
    
    if(qtd <= 1) printf("Campeonato invalido!");
    
    while(time1 < qtd)
    {
        while(time2 <= qtd)
        {
            printf("Final %d: Time%d X Time%d\n", contador, time1, time2);
            time2++;
            contador++;
        }
        time1++;
        time2 = time1 + 1;
    }
    return 0;
}