#include <stdio.h>
    
#define N 50
    
int main() {
    int contador, repeat;
    char ch, ch0;
    char word[N+1], temp[N+1];
    while(scanf("%s%c", word, &ch0) != EOF)
    {
        contador = 0;
        if(ch0 == '\n')
        {
            printf("%d\n", contador);
            continue;
        }
        repeat = 0;
        while(1)
        {
            scanf("%s", temp);
            scanf("%c", &ch);
            if((temp[0] == word[0] || temp[0] == word[0] - 32 || temp[0] == word[0] + 32) && repeat == 0)
            {
                contador++;
                repeat++;
            }
            if(temp[0] != word[0])
            {
                word[0] = temp[0];
                repeat = 0;
            }
            if(ch == '\n') break;
        }
        printf("%d\n", contador);
    }
    return 0;
}