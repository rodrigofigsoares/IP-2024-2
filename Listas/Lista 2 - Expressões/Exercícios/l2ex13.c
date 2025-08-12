#include <stdio.h>
    
int main() {
    int n = 1, contadorPar = 0, contadorImpar = 0;
    double somaPar = 0, somaImpar = 0, mediaPar = 0, mediaImpar = 0;
    
    while(n != 0)
    {
        scanf("%d", &n);
    
        if(n == 0) break;
    
        if(n%2 == 0) {
            somaPar += n;
            contadorPar++;
        }
        else if(n%2 != 0)
        {
            somaImpar += n;
            contadorImpar++;
        }
    }
    
    if(contadorPar != 0) mediaPar = somaPar/contadorPar;
    if(contadorImpar != 0) mediaImpar = somaImpar/contadorImpar;
    
    printf("MEDIA PAR: %lf\n", mediaPar);
    printf("MEDIA IMPAR: %lf\n", mediaImpar);
    
    return 0;
}
