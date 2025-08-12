#include <stdio.h>
    
#define MAX 50
    
int compara_fracao(double num1, double den1, double num2, double den2) {
    if(num2/num1 == den2/den1) return 1;
    else return 0;
}
    
int main() {
    int n, m, i, j, verify, contador, testcase = 1;
    double M[MAX][2];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &m);
        for(i=0;i<m;i++) scanf("%lf%*c%lf", &M[i][0], &M[i][1]);
        contador = 0;
        printf("Caso de teste %d\n", testcase);
        for(i=0;i<m-1;i++)
        {
            for(j=i+1;j<m;j++)
            {
                verify = compara_fracao(M[i][0], M[i][1], M[j][0], M[j][1]);
                if(verify == 1)
                {
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", M[i][0], M[i][1], M[j][0], M[j][1]);
                    contador++;
                }
            }
        }
        if(contador == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        testcase++;
    }
    return 0;
}