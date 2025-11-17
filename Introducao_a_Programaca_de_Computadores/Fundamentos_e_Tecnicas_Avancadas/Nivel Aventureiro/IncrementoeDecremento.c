#include <stdio.h>

int main() {
    int numero1 = 1;
    int resultado;

    printf("Antes incremento: %d\n", numero1);

    numero1++;
    printf("Após incremento: %d\n", numero1);

    numero1--;
    printf("Após decremento: %d\n", numero1);

    resultado = numero1++;
    printf("Após Pós-incremento -> Numero1: %d | Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-incremento -> Numero1: %d | Resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Após Pós-decremento -> Numero1: %d | Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-decremento -> Numero1: %d | Resultado: %d\n", numero1, resultado);

    return 0;
}
