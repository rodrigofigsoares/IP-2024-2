#include <stdio.h>

void verifica_anao(int * v, int * vOK) {
    int a, b, c, d, e, f, g, makebreak = 0;
    int soma;
    for(a=0;a<9;a++)
    {
        for(b=1;b<9;b++)
        {
            for(c=2;c<9;c++)
            {
                for(d=3;d<9;d++)
                {
                    for(e=5;e<9;e++)
                    {
                        for(f=6;f<9;f++)
                        {
                            for(g=6;g<9;g++)
                            {
                                soma = v[a] + v[b] + v[c] + v[d] + v[e] + v[f] + v[g];
                                if(soma == 100)
                                {
                                    vOK[0] = v[a];
                                    vOK[1] = v[b];
                                    vOK[2] = v[c];
                                    vOK[3] = v[d];
                                    vOK[4] = v[e];
                                    vOK[5] = v[f];
                                    vOK[6] = v[g];
                                    makebreak = 1;
                                }
                                if(makebreak == 1) break;
                            }
                            if(makebreak == 1) break;
                        }
                        if(makebreak == 1) break;
                    }
                    if(makebreak == 1) break;
                }
                if(makebreak == 1) break;
            }
            if(makebreak == 1) break;
        }
        if(makebreak == 1) break;
    }
}

void ordena_anao(int * v) {
    int idP, idMenor, temp, k;
    for(idP=0;idP<7;idP++)
    {
        idMenor = idP;
        for(k=idP+1;k<7;k++) if(v[k] < v[idMenor]) idMenor = k;
        temp = v[idP];
        v[idP] = v[idMenor];
        v[idMenor] = temp;
    }
}

void print_anao(int * v) {
    printf("%d\n", v[0]);
    printf("%d\n", v[1]);
    printf("%d\n", v[2]);
    printf("%d\n", v[3]);
    printf("%d\n", v[4]);
    printf("%d\n", v[5]);
    printf("%d\n", v[6]);
}

int main() {
    int n, i;
    int anoes[9], anoesOK[7];
    scanf("%d", &n);
    while(n--)
    {
        for(i=0;i<9;i++) scanf("%d", &anoes[i]);
        verifica_anao(anoes, anoesOK);
        ordena_anao(anoesOK);
        print_anao(anoesOK);
    }
    return 0;
}