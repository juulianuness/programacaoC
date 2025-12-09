
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

    int nota;

    printf("Digite a sua nota: \n"  );
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Conceito A\n");

    }else if (nota >= 80) {
        printf("Conceito B\n");

    } else if (nota >= 70) {
        printf("Conceito C\n");

    } else if (nota >= 60) {
        printf("Conceito D\n");

    } else if (nota >= 50) {
        printf("Conceito E\n");
  
    } else {
        printf("Conceito F\n");
    }
}
