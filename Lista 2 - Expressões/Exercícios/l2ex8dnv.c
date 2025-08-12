#include <stdio.h>

int main() {
    int m, p;
    double nP, nL, nT;
    int contagemP, contagemL;
    double mediaP, mediaL, NF;

    contagemP = 0;
    contagemL = 0;
    nP = 0;
    nL = 0;

    while(m >= 0)
    {
        scanf("%d", &m);
        if(m<0) break;
        while(contagemP<8)
        {
            double nota;
            scanf("%lf", &nota);
            nP += nota;
            contagemP++;
        } while(contagemL<5)
        {
            double nota;
            scanf("%lf", &nota);
            nL += nota;
            contagemL++;
        }
        mediaP = nP/8;
        mediaL = nL/5;
        scanf("%lf%d", &nT, &p);
        NF = 0.7*mediaP + 0.15*mediaL + 0.15*nT;

        if(NF >= 6 && p >= 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", m, NF);
        else if(NF >= 6 && p < 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", m, NF);
        else if(NF < 6 && p > 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", m, NF);
        else if(NF < 6 && p < 96) printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", m, NF);
        
        nP = 0;
        nL = 0;
        contagemP = 0;
        contagemL = 0;
    }
    return 0;
}