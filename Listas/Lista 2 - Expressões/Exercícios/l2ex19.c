#include <stdio.h>

int main() {
    int CC, DR, RT;
    scanf("%d%d%d", &CC, &DR, &RT);

    if(CC < 7 && DR > 50 && RT > 80000) printf("ACO DE GRAU = 10");
    else if(CC < 7 && DR > 50 && RT <= 80000) printf("ACO DE GRAU = 9");
    else if(CC < 7 && DR <= 50 && RT <= 80000) printf("ACO DE GRAU = 8");
    else printf("ACO DE GRAU = 7");
    
    printf("\n");
    return 0;
}