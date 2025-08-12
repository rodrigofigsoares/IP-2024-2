#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE * arq = fopen("binfloat", "wb");
    srand(time(0));
    float * p = NULL;
    int a, b, i;
    float c;
    for(i=0;i<10;i++)
    {
        a = rand();
        srand(rand());
        b = rand();
        c = (float)a/(float)b;
        p = &c;
        fwrite(p, sizeof(float), 1, arq);
    }
    fclose(arq);
    return 0;
}