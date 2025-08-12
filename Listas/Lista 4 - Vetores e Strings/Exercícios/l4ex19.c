#include <stdio.h>

#define N 10000

void compara_strings(char A[], char B[], int tam) {
    int contador, i, op = 0;
    while(1)
    {
        contador = 0;
        for(i=0;i<tam;i++)
        {
            if(A[i] != B[i])
            {
                if(A[i] == 122) A[i] = 97;
                else A[i] += 1;
                contador++;
                if(contador > 0) i = tam;
            }
        }
        if(contador > 0) op++;
        else break;
    }
    printf("%d\n", op);
}

int main() {
    int T, i;
    char A[N+1], B[N+1];
    scanf("%d", &T);
    while(T--)
    {
        i = 0;
        scanf("%s", A);
        while(1)
        {
            if(A[i] == '\0') break;
            i++;
        }
        scanf("%s", B);
        compara_strings(A, B, i);
    }
    return 0;
}