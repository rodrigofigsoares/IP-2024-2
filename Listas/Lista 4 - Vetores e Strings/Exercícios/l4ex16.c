#include <stdio.h>
#include <limits.h>
    
#define N 100
    
void print_conjunto(int * C, int tam) {
    int i;
    printf("(");
    for(i=0;i<tam;i++)
    {
        if(i == tam-1) printf("%d)", C[i]);
        else printf("%d,", C[i]);
    }
    printf("\n");
}
    
void conjunto_dif(int * A, int tamA, int * B, int tamB) {
    int i, j, k = 0, contador = 0, tamC;
    for(i=0;i<tamA;i++) for(j=0;j<tamB;j++) if(A[i] == B[j]) contador++;
    tamC = tamA - contador;
    int C[tamC];
    for(i=0;i<tamA;i++)
    {
        contador = 0;
        for(j=0;j<tamB;j++)
        {
            if(A[i] == B[j]) contador++;
        }
        if(contador == 0)
        {
            C[k] = A[i];
            k++;
        }
    }
    printf("(");
    for(i=0;i<tamC;i++)
    {
        if(i == tamC-1) printf("%d", C[i]);
        else printf("%d,", C[i]);
    }
    printf(")\n");
}
    
void print_produto(int * A, int tamA, int * B, int tamB) {
    int i, j;
    printf("(");
    for(i=0;i<tamA;i++)
    {
        for(j=0;j<tamB;j++)
        {
            printf("(%dx%d)", A[i], B[j]);
            if(i < tamA-1 || j < tamB - 1) printf(",");
        }
    }
    printf(")\n");
}
    
int main() {
    int tamA, tamB, n, i, j, k, contador;
    int A[N+1], B[N+1], temp;
    do
    {
        scanf("%d", &tamA);
    } while (tamA > 100 || tamA < 1);
    do
    {
        scanf("%d", &tamB);
    } while (tamB > 100 || tamB < 1);
    n = tamA + tamB;
    for(i=0;i<tamA;i++) A[i] = INT_MIN;
    for(i=0;i<tamB;i++) B[i] = INT_MIN;
    j = 0;
    k = 0;
    while(n)
    {
        contador = 0;
        scanf("%d", &temp);
        for(i=0;i<tamA;i++) if(temp == A[i]) contador++;
        if(contador > 0 || n <= tamB-k)
        {
            contador = 0;
            for(i=0;i<tamB;i++) if(temp == B[i]) contador++;
            if(contador == 0)
            {
                B[k] = temp;
                k++;
                n--;
            }
        }
        else 
        {
            A[j] = temp;
            j++;
            n--;
        }
    }
    print_conjunto(A, tamA);
    print_conjunto(B, tamB);
    conjunto_dif(A, tamA, B, tamB);
    print_produto(A, tamA, B, tamB);
    return 0;
}