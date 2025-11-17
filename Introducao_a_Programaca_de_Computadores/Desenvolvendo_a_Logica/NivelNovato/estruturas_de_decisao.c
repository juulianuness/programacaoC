#include <stdio.h>

int main() {
    int idade = 19;

    if (idade < 16) {
        printf("Você ainda não pode votar!\n");
    }
    else if ((idade >= 16 && idade < 18) || idade >= 65) {
        printf("O voto é opcional para você!\n");
    }
    else {
        printf("O voto é obrigatório para você!\n");
    }

    return 0;
}