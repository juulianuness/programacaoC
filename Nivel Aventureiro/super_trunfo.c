#include <stdio.h>

int main () {
    char estado, codigo[6], nomeCidade[20];
    float area, PIB;
    int pontosTuristicos, populacao, carta;

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


    return 0;
}