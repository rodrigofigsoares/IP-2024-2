#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    if(argc != 3)
    {
        printf("Entrada Invalida!\n");
        printf("Tente: ./seq A B\n");
        return 0;
    }
    int i, A, B;
    A = atoi(argv[1]);
    B = atoi(argv[2]);
    printf("(");
    if(A > B)
    {
        for(i=0;i<=A-B;i++)
        {
            if(i == A-B) printf("%d", A-i);
            else printf("%d, ", A-i);
        }
    }
    else if(A < B)
    {
        for(i=0;i<=B-A;i++)
        {
            if(i == B-A) printf("%d", A+i);
            else printf("%d, ", A+i);
        }
    }
    printf(")\n");
    return 0;
}