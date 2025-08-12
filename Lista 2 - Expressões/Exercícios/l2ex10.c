#include <stdio.h>

int main() {
    int n, k, d1, d2;
    scanf("%d", &n);

    if(n<3 || n>11) 
    {
        printf("Combinacao impossivel\n");
        return 0;
    }

    d1 = 0;
    k=0;

    while(d1<n-1)
    {
        d1++;
        d2 = n-d1;

        if(d1>6) break;
        else if (d2>6)
        {
            while(d2>6)
            {
            d1++;
            d2--;
            }
            printf("D1: %d, D2: %d\n", d1, d2);
            k++;
        } else
        {
        k++;
        if(d1 == d2)
        {
            d1++;
            d2--;
            printf("D1: %d, D2: %d\n", d1, d2);
        } else printf("D1: %d, D2: %d\n", d1, d2);
        }
    } printf("Ha %d possibilidades\n", k);
    return 0;
}