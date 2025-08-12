#include <stdio.h>

int main() {
    int n1, n2, n3, primo = 2, MMC = 1, i = 1;
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1 == 0 || n2 == 0 || n3 == 0) return 0;

    while(n1 != 1 || n2 != 1 || n3 != 1)
    {
        if(n1%primo == 0 || n2%primo == 0 || n3%primo == 0) printf("%d %d %d :%d\n", n1, n2, n3, primo);
        while(n1%primo == 0 || n2%primo == 0 || n3%primo == 0)
        {
            if(n1%primo == 0) n1 = n1/primo;
            if(n2%primo == 0) n2 = n2/primo;
            if(n3%primo == 0) n3 = n3/primo;
            if(n1%primo == 0 || n2%primo == 0 || n3%primo == 0) printf("%d %d %d :%d\n", n1, n2, n3, primo);
            MMC *= primo;
        }
        primo++;
        while(i < primo+1)
        {
            if(primo%i == 0 && i != primo && i != 1)
            {
                primo++;
            }
            else if(primo%i == 0 && i == primo) break;
            i++;
        }
        i = 1;
    }
    printf("MMC: %d\n", MMC);
    return 0;
}