#include <stdio.h>

int main () {
     float preco1 = 179.0;
     float preco2 = 179.0;

        if (preco1 < preco2) {
            printf("O preco1 e menor que o preco2\n");
        } else {
            if (preco1 > preco2) {
                printf("O preco1 e maior que o preco2\n");
            } else {
                printf("Os precos sao iguais\n");
            }
        }

}