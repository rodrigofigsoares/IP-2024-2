#include <stdio.h>

int main() {
    FILE * arq = fopen("abc", "wb");
    int p[3] = {1629495328, 1629495329, 1629495330};
    fwrite(p, sizeof(int), 3, arq);
    fclose(arq);
    return 0;
}