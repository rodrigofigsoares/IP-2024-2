#include <stdio.h>

int main() {
    int n1, n2, n3;
    char c1, c2, c3;
    int A, B, C;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c %c %c", &c1, &c2, &c3);

    if(n1 > 100 || n1 < 0 || n2 > 100 || n2 < 0 || n3 > 100 || n3 < 0) return 0;

    if(n1 > n2 && n1 > n3)
    {
        C = n1;
        if(n2 > n3)
        {
            B = n2;
            A = n3;
        }
        else if(n3 > n2)
        {
            B = n3;
            A = n2;
        }
    }
    else if(n2 > n1 && n2 > n3)
    {
        C = n2;
        if(n1 > n3)
        {
            B = n1;
            A = n3;
        }
        else if(n3 > n1)
        {
            B = n3;
            A = n1;
        }
    }
    else if(n3 > n1 && n3 > n2)
    {
        C = n3;
        if(n1 > n2)
        {
            B = n1;
            A = n2;
        }
        else if(n2 > n1)
        {
            B = n2;
            A = n1;
        }
    }

    switch(c1)
    {
        case 'A':
            switch(c2)
            {
                case 'B':
                    printf("%d %d %d", A, B, C);
                    break;
                case 'C':
                    printf("%d %d %d", A, C, B);
                    break;
            }
            break;
        case 'B':
            switch(c2)
            {
                case 'A':
                    printf("%d %d %d", B, A, C);
                    break;
                case 'C':
                    printf("%d %d %d", B, C, A);
                    break;
            }
            break;
        case 'C':
            switch(c2)
            {
                case 'A':
                    printf("%d %d %d", C, A, B);
                    break;
                case 'B':
                    printf("%d %d %d", C, B, A);
                    break;
            }
            break;
        default:
            break;
    }


    printf("\n");
    return 0;   
}