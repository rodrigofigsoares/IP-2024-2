#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    if(argc != 5)
    {
        printf("Entrada Invalida!\n");
        printf("Tente: ./prog -start/-stop A -stop/-start B\n");
        return 0;
    }
    int i, A, B;
    A = atoi(argv[2]);
    B = atoi(argv[4]);
    printf("(");
    if(strcmp(argv[1], "-start") == 0)
    {
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
    }
    else if(strcmp(argv[1], "-stop") == 0)
    {
        if(B > A)
        {
            for(i=0;i<=B-A;i++)
            {
                if(i == B-A) printf("%d", B-i);
                else printf("%d, ", B-i);
            }
        }
        else if(B < A)
        {
            for(i=0;i<=A-B;i++)
            {
                if(i == A-B) printf("%d", B+i);
                else printf("%d, ", B+i);
            }
        }
    }
    printf(")\n");
    return 0;
}