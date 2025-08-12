#include <stdio.h>

int main() {
    int data, dia, mes, ano;
    scanf("%d", &data);
    
    dia = data/1000000;

    mes = (data%1000000)/10000;

    ano = (data%1000000)%10000;

    if(dia > 31 || dia < 1 || mes > 12 || mes < 1 || ano < 0)
    {
        printf("Data invalida!\n");
    }

    else if(dia == 31)
    {
        switch(mes)
        {
            case 1:
                printf("%d de janeiro de %d\n", dia, ano);
                break;
            case 3:
                printf("%d de março de %d\n", dia, ano);
                break;
            case 5:
                printf("%d de maio de %d\n", dia, ano);
                break;
            case 7:
                printf("%d de julho de %d\n", dia, ano);
                break;
            case 8:
                printf("%d de agosto de %d\n", dia, ano);
                break;
            case 10:
                printf("%d de outubro de %d\n", dia, ano);
                break;
            case 12:
                printf("%d de dezembro de %d\n", dia, ano);
                break;
            default:
                printf("Data invalida!\n");
                break;
        }
    }
    else if(dia == 30 || dia == 29)
    {
        switch(mes)
        {
            case 1:
                printf("%d de janeiro de %d\n", dia, ano);
                break;
            case 2:
                printf("Data invalida!\n");
                break;
            case 3:
                printf("%d de março de %d\n", dia, ano);
                break;
            case 4:
                printf("%d de abril de %d\n", dia, ano);
                break;
            case 5:
                printf("%d de maio de %d\n", dia, ano);
                break;
            case 6:
                printf("%d de junho de %d\n", dia, ano);
                break;
            case 7:
                printf("%d de julho de %d\n", dia, ano);
                break;
            case 8:
                printf("%d de agosto de %d\n", dia, ano);
                break;
            case 9:
                printf("%d de setembro de %d\n", dia, ano);
                break;
            case 10:
                printf("%d de outubro de %d\n", dia, ano);
                break;
            case 11:
                printf("%d de novembro de %d\n", dia, ano);
                break;
            case 12:
                printf("%d de dezembro de %d\n", dia, ano);
                break;
            default:
                printf("Data invalida!\n");
                break;
        }
    }
    else if(dia < 29)
    {
        switch(mes)
        {
            case 1:
                printf("%d de janeiro de %d\n", dia, ano);
                break;
            case 2:
                printf("%d de fevereiro de %d\n", dia, ano);
                break;
            case 3:
                printf("%d de março de %d\n", dia, ano);
                break;
            case 4:
                printf("%d de abril de %d\n", dia, ano);
                break;
            case 5:
                printf("%d de maio de %d\n", dia, ano);
                break;
            case 6:
                printf("%d de junho de %d\n", dia, ano);
                break;
            case 7:
                printf("%d de julho de %d\n", dia, ano);
                break;
            case 8:
                printf("%d de agosto de %d\n", dia, ano);
                break;
            case 9:
                printf("%d de setembro de %d\n", dia, ano);
                break;
            case 10:
                printf("%d de outubro de %d\n", dia, ano);
                break;
            case 11:
                printf("%d de novembro de %d\n", dia, ano);
                break;
            case 12:
                printf("%d de dezembro de %d\n", dia, ano);
                break;
            default:
                printf("Data invalida!\n");
                break;
        }
    }

    return 0;
}