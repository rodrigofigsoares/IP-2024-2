#include <stdio.h>

int main() {
    int n1, n2, n3, nT, nQ;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    nT = n1*100 + n2*10 + n3;
    nQ = nT*nT;

    if(n1>9)
    {
        printf("DIGITO INVALIDO\n");
    } else if(n2>9)
    {
        printf("DIGITO INVALIDO\n");
    } else if(n3>9)
    {
        printf("DIGITO INVALIDO\n");
    } else if(n1 == 0 && n2 == 0 && n3 == 0)
    {
        printf("%d, %d\n", n3, nQ);
    } else if(n1 == 0 && n2 == 0 && n3 != 0)
    {
        printf("%d, %d\n", n3, nQ);
    } else if(n1 == 0 && n2 != 0)
    {
        printf("%d%d, %d\n", n2, n3, nQ);
    } else if(n1 != 0)
    {
        printf("%d%d%d, %d\n", n1, n2, n3, nQ);
    }
    
    return 0;
}