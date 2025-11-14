#include <stdio.h>

int main () {
    char estado, codigo[6], nomeCidade[20];
    float area, PIB;
    int pontosTuristicos, populacao, carta;

    char estado2, codigo2[6], nomeCidade2[20];
    float area2, PIB2;
    int pontosTuristicos2, populacao2, carta2;

    printf("Digite o numero da carta: \n");
    scanf("%d", &carta);
 
    printf("Digite uma letra de 'A' a 'H' para o Estado: \n");
    scanf(" %c", &estado); 

    printf("Digite o codigo da carta (letra do estado + número de 01 a 04): \n");
    scanf("%s", codigo); 

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", nomeCidade); 

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (Produto Interno Bruto): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos);

    float densidade = populacao / area;
    float pibPerCapita = PIB / populacao;

    
    //carta 2

    printf("Digite o numero da segunda carta : \n");
    scanf("%d", &carta2);
 
    printf("Digite uma letra de 'A' a 'H' para o Estado: \n");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta (letra do estado + número de 01 a 04): \n");
    scanf("%s", codigo2); 

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", nomeCidade2); 

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (Produto Interno Bruto): \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = PIB2 / populacao2; 

    //carta 1 

    printf("Carta: %d \n", carta);
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %.2f de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita );

    //carta 2
    printf("\n");
    printf("Carta: %d \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %.2f de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2 );

    printf("\n");

     int carta1 =
    (populacao > populacao2) +
    (area > area2) +
    (PIB > PIB2) +
    (pontosTuristicos > pontosTuristicos2);

    int carta2p =
    (populacao2 > populacao) +
    (area2 > area) +
    (PIB2 > PIB) +
    (pontosTuristicos2 > pontosTuristicos);

    printf("Carta 1 venceu da carta 2? %d\n", (carta1 > carta2p));
    printf("Carta 2 venceu da carta 1? %d\n", (carta2p > carta1));

        printf("\n Comparação Detalhada \n\n");

    printf("População: Carta %d venceu (%d)\n",
        (populacao > populacao2 ? 1 : 2),
        (populacao > populacao2));

    printf("Área: Carta %d venceu (%d)\n",
        (area > area2 ? 1 : 2),
        (area > area2));

    printf("PIB: Carta %d venceu (%d)\n",
        (PIB > PIB2 ? 1 : 2),
        (PIB > PIB2));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
        (pontosTuristicos > pontosTuristicos2 ? 1 : 2),
        (pontosTuristicos > pontosTuristicos2));

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        (densidade < densidade2 ? 1 : 2),   // menor vence
        (densidade < densidade2));

    printf("PIB per Capita: Carta %d venceu (%d)\n",
        (pibPerCapita > pibPerCapita2 ? 1 : 2),
        (pibPerCapita > pibPerCapita2));

    float superPoder1 = populacao + area + PIB + pontosTuristicos;
    float superPoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2;

    printf("Super Poder: Carta %d venceu (%d)\n",
        (superPoder1 > superPoder2 ? 1 : 2),
        (superPoder1 > superPoder2));

    

    return 0;
}