#include <stdio.h>

#define N 99

int main() {
    char M[N][N];
    int dim, i = 0, j, k = 0;
    char chBorda, chFundo;
    scanf("%d %c %c", &dim, &chBorda, &chFundo);
    if(dim%2 == 0) return 0;
    while(1)
    {
        for(j=0;j<dim;j++)
        {
            if(j > dim/2 + k || j < dim/2 - k) M[i][j] = ' ';
            else if(j == dim/2 + k || j == dim/2 - k) M[i][j] = chBorda;
            else M[i][j] = chFundo;
        }
        if(i < dim/2) k++;
        else k--;
        i++;
        if(i == dim) break;
    }
    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            printf("%c", M[i][j]);
            if(j < dim-1) printf(" ");
            else printf(" \n");
        }
    }
    return 0;
}