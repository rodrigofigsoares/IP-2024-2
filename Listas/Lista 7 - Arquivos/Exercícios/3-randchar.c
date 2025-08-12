#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int n, i, r;
    scanf("%d", &n);
    srand(time(0));
    FILE * arq = fopen("caracteres-randomicos", "w");
    for(i=0;i<n;i++)
    {
        r = 97 + rand()%26;
        fprintf(arq, "%c, ", (char)r);
    }
    fclose(arq);
    return 0;
}