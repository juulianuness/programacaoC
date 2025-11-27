#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 100;

    printf("Digite a temperatura atual (em graus Celsius): \n ");
    scanf("%f", &temperatura);

    printf("Digite a umidade atual (em porcentagem): \n");
    scanf("%f", &umidade);

    printf("Digite a quantidade em estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("A temperatura está alta. \n");
    } else {
        printf("A temperatura está aceitavel. \n");
    }

    if (umidade > 50 ){ 
    printf("A umidade está elevada. \n");
    } else {
        printf("A umidade está aceitavel. \n");
    }

    if (estoque < estoqueMinimo) {
    printf("O estoque está mais baixo que o minimo necessario. \n");
    } else {
        printf("O estoque está ok. \n");
    }

    return 0;
}