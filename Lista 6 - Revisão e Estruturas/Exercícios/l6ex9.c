#include <stdio.h>
#include <stdlib.h>

#define NUM 0
#define DEN 1
    
int compara_fracao(double num1, double den1, double num2, double den2) {
    if(num2/num1 == den2/den1) return 1;
    else return 0;
}
    
int main() {
    int n, i, j, k, verify, contador, testcase = 1, size;
    double ** M;
    char ch;
    scanf("%d", &n);
    for(k=0;k<n;k++)
    {
        M = (double**)malloc(sizeof(double*));
        size = 1;
        i = 0;
        do {
            M = realloc(M, size*sizeof(double*));
            M[i] = (double*)malloc(2*sizeof(double));
            scanf("%lf%*c%lf", &M[i][NUM], &M[i][DEN]);
            scanf("%c", &ch);
            size++;
            i++;
        } while(ch != '\n');
        contador = 0;
        printf("Caso de teste %d\n", testcase);
        for(i=0;i<size-2;i++)
        {
            for(j=i+1;j<size-1;j++)
            {
                verify = compara_fracao(M[i][NUM], M[i][DEN], M[j][NUM], M[j][DEN]);
                if(verify == 1)
                {
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", M[i][0], M[i][1], M[j][0], M[j][1]);
                    contador++;
                }
            }
        }
        if(contador == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        for(i=0;i<size-1;i++) free(M[i]);
        free(M);
        testcase++;
    }
    return 0;
}