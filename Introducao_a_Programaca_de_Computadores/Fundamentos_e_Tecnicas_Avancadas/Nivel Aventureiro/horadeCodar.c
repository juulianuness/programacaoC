#include <stdio.h>

int main () {
    int nota1, nota2, nota3;
    float media;

    printf("***Cálculo de Média***\n");

    printf("Digite a sua primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) /3; 
    printf("A média das notas é: %.1f\n", media);

    return 0;
}