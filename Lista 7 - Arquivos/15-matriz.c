#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char instruction[5];
    char out[100];
    int l, c, i, j, r, *pi = NULL;
    float *pf = NULL;
    char space[1] = {' '};
    char enter[1] = {'\n'};
    scanf("%s%*c", instruction);
    if(strcmp(instruction, "new") == 0)
    {
        scanf("%d%d%*c", &l, &c);
        scanf("%[^\n]%*c", out);
        FILE * output = fopen(out, "wb");
        pi = &l;
        fwrite(pi, sizeof(int), 1, output);
        fwrite(space, sizeof(char), 1, output);
        pi = &c;
        fwrite(pi, sizeof(int), 1, output);
        fwrite(enter, sizeof(char), 1, output);
        srand(time(0));
        float ** M = (float**)malloc(l*sizeof(float*));
        for(i=0;i<l;i++) M[i] = (float*)malloc(c*sizeof(float));
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                r = rand();
                M[i][j] = (float)1/(float)r;
                srand(rand());
            }
        }
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                pf = &M[i][j];
                if(j == c-1)
                {
                    fwrite(pf, sizeof(float), 1, output);
                    fwrite(enter, sizeof(char), 1, output);
                }
                else
                {
                    fwrite(pf, sizeof(float), 1, output);
                    fwrite(space, sizeof(char), 1, output);
                }
            }
            free(M[i]);
        }
        free(M);
        fclose(output);
    }
    else if(strcmp(instruction, "read") == 0)
    {
        scanf("%[^\n]%*c", out);
        FILE * input = fopen(out, "rb");
        fread(pi, sizeof(int), 1, input);
        l = *pi;
        fread(pi, sizeof(int), 1, input);
        c = *pi;
        printf("%d %d\n", l, c);
        float ** M = (float**)malloc(l*sizeof(float*));
        for(i=0;i<l;i++) M[i] = (float*)malloc(c*sizeof(float));
        for(i=0;i<l;i++) 
        {
            for(j=0;j<c;j++) 
            {
                fread(pf, sizeof(float), 1, input);
                M[i][j] = *pf;
            }
        }
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                if(j == c-1) printf("%g\n", M[i][j]);
                else printf("%g ", M[i][j]);
            }
            free(M[i]);
        }
        free(M);
        fclose(input);
    }
    return 0;
}