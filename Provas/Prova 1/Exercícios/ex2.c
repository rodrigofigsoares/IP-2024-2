#include <stdio.h>
    
int main() {
    int hInicial, mInicial, hFinal, mFinal, hResultante, mResultante, hTotal, mTotal, contador = 0;
    scanf("%d%d%d%d", &hInicial, &mInicial, &hFinal, &mFinal);
    
    hResultante = hFinal - hInicial;
    mResultante = mFinal - mInicial;
    
    if(hResultante == 0) hTotal = 24;
    else if(hResultante > 0 && mResultante < 0) hTotal = 0;
    else if(hResultante > 0 && mResultante >= 0) hTotal = hResultante;
    else if(hResultante < 0) hTotal = 24 + hResultante;
    if(mResultante == 0) mTotal = 0;
    else if(mResultante < 0) mTotal = 60 + mResultante;
    else if(mResultante > 0) mTotal = mResultante;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hTotal, mTotal);
    return 0;
}