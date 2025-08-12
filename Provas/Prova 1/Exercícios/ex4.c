#include <stdio.h>
    
int main() {
    int L, C, i = 2, j = 1, temp;
    scanf("%d%d", &L, &C);
    
    while(i <= L)
    {
        printf("(%d,%d)", i, j);
        if(i<=L && j < i-1)
        {
            while(i<=L && j < i-1)
            {
                j++;
                printf("-(%d,%d)", i, j);
                if(j == i-1)
                {
                    printf("\n");
                    break;
                }
                else if(j == C)
                {
                    printf("\n");
                    break;
                }
            }
        } else printf("\n");
        j = 1;
        i++;
    }
    return 0;
}