#include <stdio.h>
#include <string.h>

#define N 200

void lowercase(char * v, int tam) {
    int i;
    for(i=0;i<tam;i++) if(v[i] > 64 && v[i] < 91) v[i] += 32;
}

void ordena_string(char * v, int tam) {
    int idPos, k, idMenor;
    char temp;
    for(idPos=0;idPos<tam;idPos++)
    {
        idMenor = idPos;
        for(k=idPos+1;k<tam;k++) if(v[k] < v[idMenor]) idMenor = k;
        temp = v[idMenor];
        v[idMenor] = v[idPos];
        v[idPos] = temp;
    }
}

void frequency(char * v, int tam) {
    char freq[26], temp;
    int i, j = 0, k = 0, frequencia, maiorFrequencia = 0, qtd = 0;
    while(1)
    {
        temp = v[j];
        frequencia = 0;
        if(i >= tam) break;
        if(temp > 96 && temp < 123)
        {
            for(i=j;i<=tam;i++)
            {
                if(v[i] == temp) frequencia++;
                else 
                {
                    j = i;
                    if(frequencia > maiorFrequencia)
                    {
                        k = 0;
                        freq[k] = v[i-1];
                        maiorFrequencia = frequencia;
                        qtd = 1;
                    }
                    else if(frequencia == maiorFrequencia)
                    {
                        k++;
                        freq[k] = v[i-1];
                        qtd++;
                    }
                    break;
                }
            }
        }
        else j++;
    }
    for(i=0;i<qtd;i++) printf("%c", freq[i]);
    printf("\n");
}

int main() {
    int n, tam;
    char v[N+1];
    scanf("%d%*c", &n);
    while(n--)
    {
        scanf("%[^\n]%*c", v);
        tam = strlen(v);
        lowercase(v, tam);
        ordena_string(v, tam);
        frequency(v, tam);
    }
    return 0;
}