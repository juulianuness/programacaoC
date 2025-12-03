// OPERADOR E (&&) 
// o resultado de uma condição com && só vai ser verdadeiro se ambas as condições forem verdadeiras

// OPERADOR OU (||)
// o resultado de uma condição com || vai ser verdadeiro se pelo menos uma das condições for verdadeira e falso se ambas forem falsas

// OPERADOR NÃO (!)
// o operador ! inverte o valor lógico de uma condição, ou seja, se a condição for verdadeira, o resultado será falso, e se for falsa, o resultado será verdadeiro


// Ordem de precedência dos operadores lógicos em C 
// [] ()  
// ! - ++ --
// * % /
// + -
// < <= > >=
// ==
// !=
// &&
// =- =+ *= /= %=

#include <stdio.h>

int main() {

    int a = 10, b = -5;

    if (a > 0 && b > 0) {
        printf("Ambos os números são positivos.\n");
    } else {
        printf("Pelo menos um dos números não é positivo.\n");
    }

    if (a > 0 || b > 0) {
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("O dois numeros são negativos .\n");
    }

    int c = 10;

    if (!(c > 0)) { // o não verdadedeiro é falso 
        printf(" A variavel c é negativa\n");
    } else {
        printf("A variavel é positiva.\n");
    }

    if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }

    // a > 0=> Verdadeiro
    // b < 0 => Verdadeiro
    // Verdadeiro && Verdadeiro => Verdadeiro
    // Verdadeiro || c == 0
    // Verdadeiro || Falso => Verdadeiro


    //IDADE E ALTURA 

    int idade = 20;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        
    printf("Você está na faixa etária e tem a altura adequada\n");
    } else {
    printf("Você não atende aos critérios\n");
    }

    //idade >= 18 Verdadeira
    //idade <= 30 Verdadeira
    //Verdadeira && Verdadeira => Verdadeira
    //Verdadeiro && altura > 1.70
    //Verdadeiro && Verdadeiro => Verdadeiro.

    return 0;
}
