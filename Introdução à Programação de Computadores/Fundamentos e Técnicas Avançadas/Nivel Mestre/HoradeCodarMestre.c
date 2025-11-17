#include <stdio.h>
 
int main () {
    char produtoA[30] = "Camiseta preta";
    char produtoB[30] = "Camiseta branca";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 49.90;
    float valorB = 39.90;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;

    int resultadoA,resultadoB;

    //Exibir as informações dos produtos
    printf(" O produto %s tem em estoque %u peças e o valor unitario de R$ %.2f reais.\n", produtoA, estoqueA, valorA);
    printf(" O produto %s tem em estoque %u peças e o valor unitario de R$ %.2f reais.\n", produtoB, estoqueB, valorB);

    // Comparações com o valor minimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O Produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O Produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    // Comparações entre os valores totais dos produtos

    printf("O Valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
    }