#include <stdio.h>

int main() {
    unsigned long int codigo, maisvendida, maislucrativa;
    float pCompra, pVenda, lucro, lucroMaior = 0, compraTotal = 0, vendaTotal = 0, lucroTotal = 0;
    int qtdVendas, lucroMenor10 = 0, lucroMaior10 = 0, lucroMaior20 = 0, vendaMaior = 0;

    while((scanf("%lu%f%f%d", &codigo, &pCompra, &pVenda, &qtdVendas)) != EOF)
    {
        lucro = ((pVenda/pCompra)*100) - 100;

        if(lucro < 10) lucroMenor10++;
        else if(lucro >= 10 && lucro <= 20) lucroMaior10++;
        else if(lucro > 20) lucroMaior20++;

        if(lucro > lucroMaior)
        {
            lucroMaior = lucro;
            maislucrativa = codigo;
        }
        if(qtdVendas > vendaMaior)
        {
            vendaMaior = qtdVendas;
            maisvendida = codigo;
        }
        vendaTotal += qtdVendas*pVenda;
        compraTotal += qtdVendas*pCompra;
    }

    lucroTotal = ((vendaTotal/compraTotal)*100) - 100;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucroMenor10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucroMaior10);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucroMaior20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", maislucrativa);
    printf("Codigo da mercadoria mais vendida: %lu\n", maisvendida);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", compraTotal, vendaTotal, lucroTotal);

    return 0;
}