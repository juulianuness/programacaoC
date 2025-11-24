#include <stdio.h>

int main (){

 int numero = 5, resultado;

 resultado = numero % 2;

 printf ("a variavel resultado é: %d\n", resultado);

    if (resultado == 0) { //ou numero % 2 == 0
        printf("O numero é par.\n");
    }
    return 0;
}