#include <stdio.h>

int main() {
    unsigned long int n, q, i;
    scanf("%lu%lu", &n, &q);

    i = 0;

    if(n%2 == 0)
    {
        while(i<q)
        {
            printf("%lu ", n);
            n += 2;
            i++;
        }
    } else printf("O PRIMEIRO NUMERO NAO E PAR");
    
    printf("\n");
    return 0;
}