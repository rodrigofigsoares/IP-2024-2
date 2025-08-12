#include <stdio.h>

int main() {
    int n, contador1, contador2, i, k, temp;
    scanf("%d", &n);

    temp = 0;
    contador2 = 0;
    contador1 = 0;

    for(i=0;i<n;i++)
    {
        scanf("%d", &k);
        if(k>temp)
        {
            contador1++;
        }
        if(k<=temp)
        {
            contador1 = 1;
        }
        if(contador1>contador2)
        {
            contador2 = contador1;
        }
        temp = k;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", contador2);
    return 0;
}