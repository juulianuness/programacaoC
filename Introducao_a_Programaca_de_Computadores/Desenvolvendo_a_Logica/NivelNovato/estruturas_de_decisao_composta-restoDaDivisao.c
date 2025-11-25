#include <stdio.h>

int main (){

 int numero = 8, resultado;

 resultado = numero % 2;

 printf ("a variavel resultado é: %d\n", resultado);

    if (resultado == 0) { //ou numero % 2 == 0
        printf("O numero é par.\n");
    } else {
        printf("O numero é impar.\n");
    }
    return 0;
}