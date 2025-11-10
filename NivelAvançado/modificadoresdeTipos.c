#include <stdio.h>

int main() {

    unsigned int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;
    printf("Número com sinal: %u\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    int numeroNormal = 2147483647; // Valor máximo de int
    long int numeroGrande = 2147483647;
    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);
    numeroGrande = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    //long double
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;
    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long long int numGrande = 4000000000;
    unsigned int num = 4000000000;

    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %lld\n", numGrande);
    printf("Número: %u\n", num);

    return 0;
}
