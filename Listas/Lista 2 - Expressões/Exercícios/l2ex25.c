#include <stdio.h>

int main() {
    int n, i, x, k;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d*%d*%d = ", i, i, i);
        x = i*i - i + 1;
        printf("%d", x);
        for(k=0;k<i-1;k++)
        {
            x = x+2;
            printf("+%d", x);
        }
        printf("\n");
    }
    return 0;
}