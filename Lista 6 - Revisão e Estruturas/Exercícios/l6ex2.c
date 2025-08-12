#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
typedef struct {
    char name[50+1];
    double price;
} product;
    
typedef struct {
    char name[50+1];
    int qtd;
} buy;
    
double calcula_gasto(product * product_list, buy * buy_list, int tamLista, int tamCompra) {
    int i, j;
    double total = 0;
    for(i=0;i<tamCompra;i++)
    {
        for(j=0;j<tamLista;j++)
        {
            if(strcmp(buy_list[i].name, product_list[j].name) == 0)
            {
                total += product_list[j].price * buy_list[i].qtd;
                break;
            }
        }
    }
    return total;
}
    
int main() {
    int n, m, p, i;
    double total;
    scanf("%d", &n);
    while(n--)
    {
        total = 0;
        scanf("%d", &m);
        product * ptr = (product*)malloc(m*sizeof(product));
        for(i=0;i<m;i++) scanf("%s%lf", ptr[i].name, &(ptr[i].price));
        scanf("%d", &p);
        buy * buy_list = (buy*)malloc(p*sizeof(buy));
        for(i=0;i<p;i++) scanf("%s%d", buy_list[i].name, &(buy_list[i].qtd));
        total = calcula_gasto(ptr, buy_list, m, p);
        printf("R$ %.2lf\n", total);
        free(ptr);
        free(buy_list);
    }
    return 0;
}