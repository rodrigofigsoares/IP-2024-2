#include <stdio.h>
#include <string.h>

#define N 2048

void freq_string(char * str, char * sep, int * freq, int size) {
    int i, j, k = 0, tam = 0, contador = 0, currentSize, isChar, isPrevious, isNext, string = 0;
    char strAtual[N+1];
    // int freq[5];
    // for(i=0;i<5;i++) freq[i] = 0;
    while(contador < size+1)
    {
        isChar = 1;
        isPrevious = 1;
        for(i=0;i<11;i++) if(*str == sep[i] || *str == '\0') isChar = 0;
        for(i=0;i<11;i++) if(*(str-1) == sep[i]) isPrevious = 0;
        if(isChar == 0 && isPrevious == 1)
        {
            str -= contador;
            while(1)
            {
                isNext = 1;
                isPrevious = 1;
                for(i=0;i<currentSize;i++)
                {
                    for(j=0;j<11;j++) if(*(str-i-1) == sep[j]) isPrevious = 0;
                    if((*str == strAtual[i] || (*str > 96 && *str < 123 && *str == strAtual[i] + 32) || (*str > 64 && *str < 91 && *str == strAtual[i] - 32)) && isPrevious == 0) string++;
                    else break;
                    for(j=0;j<11;j++) if(*(str+1) == sep[j] || *(str+1) == '\0') isNext = 0;
                    str++;
                }
                if(string == currentSize && isNext == 0) freq[k]++;
                if(string == 0) str++;
                string = 0;
                if(*str == '\0') break;
            }
            str -= size;
            str += contador;
            k++;
            tam = 0;
        }
        strAtual[tam] = *str;
        strAtual[tam+1] = '\0';
        currentSize = strlen(strAtual);
        str++;
        if(isChar == 1) tam++;
        contador++;
    }
}

void print_words(char * str, char * sep, int * freq) {
    int i, k = 0, printStr, noPrint = 0, firstL = 1, firstC = 1;
    while(1)
    {
        noPrint = 0;
        printStr = 1;
        for(i=0;i<11;i++) if(*str == sep[i]) printStr = 0;
        if(firstC != 1) for(i=0;i<11;i++) if(*(str-1) == sep[i]) noPrint = 1;
        if(firstL == 1)
        {
            printf("(");
            firstL = 0;
        }
        if(printStr == 1)
        {
            printf("%c", *str);
            str++;
            firstC = 0;
        }
        if((printStr == 0 && noPrint == 0) || *str == '\0')
        {
            printf(")");
            printf("%d\n", freq[k]);
            firstL = 1;
            k++;
            if(*str != '\0') str++;
        }
        if(printStr == 0 && noPrint == 1) str++;
        if(*str == '\0') break;
    }
}

int main() {
    char str[N+1];
    char sep[11] = {' ', '.', ',', '!', '?', '(', ')', '[', ']', '{', '}'};
    int freq[N];
    int size, i;
    scanf("%[^\n]%*c", str);
    size = strlen(str);
    for(i=0;i<size;i++) freq[i] = 0;
    freq_string(str, sep, freq, size);
    print_words(str, sep, freq);
    return 0;
}