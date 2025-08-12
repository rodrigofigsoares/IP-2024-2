#include <stdio.h>

int main() {
    FILE * arq = fopen("TEXTO", "w");
    int i;
    for(i=1;i<=100;i++) fprintf(arq, "%d\n", i);
    fclose(arq);
    return 0;
}