#include <stdio.h>

int main() {

    // --------- CARTA 1 ---------
    
    char estado1[3] = "SC";
    char codigo1[6] = "SC01";
    char nome1[20] = "SantaCatarina";
    int populacao1 = 7700000;
    float area1 = 95733.0;
    float PIB1 = 367.00;
    int pontos1 = 30;

    float densidade1 = populacao1 / area1;
    float pibCapita1 = PIB1 / populacao1;


// --------- CARTA 2 ---------


    char estado2[3] = "RJ";
    char codigo2[6] = "RJ01";
    char nome2[20] = "RioDeJaneiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float PIB2 = 369.10;
    int pontos2 = 25;

    float densidade2 = populacao2 / area2;
    float pibCapita2 = PIB2 / populacao2;

    
    printf("\nComparação de cartas (Atributo: PIB)\n\n");

    printf("Carta 1 - %s (%s): %.2f bilhões\n", nome1, estado1, PIB1);
    printf("Carta 2 - %s (%s): %.2f bilhões\n\n", nome2, estado2, PIB2);


// ----------- LÓGICA PEDIDA NO DESAFIO -----------


    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    }
    else if (PIB2 > PIB1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }

     return 0;
}
  