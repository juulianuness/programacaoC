
// verificam varias decisões em sequência usando if, else if e else sem estarem uma dentro da outra(aninhada)


// if (condicao) {
    // // Código a ser executado se a condicao for verdadeira
// } else if (condicao2) {
    // // Código a ser executado se a condicao  for falsa e condicao2 for verdadeira
// } else {
    // // Código a ser executado se todas as condições anteriores forem falsas
// }

#include <stdio.h>

int main () {

    int idade;

    printf("Digite a sua idade: \n"  );
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Você é uma criança.\n");

    }else if (idade >= 12 && idade <18) {
        printf("Você é um adolescente.\n");

    } else if (idade >= 18 && idade < 65) {
        printf("Você é um adulto.\n");

    } else {
        printf("Você é um idoso.\n");
    }
    
}