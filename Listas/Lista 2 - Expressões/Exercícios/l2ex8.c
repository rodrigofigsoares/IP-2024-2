#include <stdio.h>

int main() {
    int m, p;
    double np1, np2, np3, np4, np5, np6, np7, np8;
    double nl1, nl2, nl3, nl4, nl5;
    double nt;
    double mediaP, mediaL, NF;

    while(m >= 0)
    {
    scanf("%d", &m);
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%d", &np1, &np2, &np3, &np4, &np5, &np6, &np7, &np8, &nl1, &nl2, &nl3, &nl4, &nl5, &nt, &p);
        mediaP = (np1 + np2 + np3 + np4 + np5 + np6 + np7 + np8)/8;
        mediaL = (nl1 + nl2 + nl3 + nl4 + nl5)/5;
        NF = 0.7*mediaP + 0.15*mediaL + 0.15*nt;

        if(NF >= 6 && p >= 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", m, NF);
        else if(NF >= 6 && p < 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", m, NF);
        else if(NF < 6 && p > 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", m, NF);
        else if(NF < 6 && p < 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", m, NF);
    }
    return 0;
}