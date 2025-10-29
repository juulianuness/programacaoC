//PRINTF

#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
}

//SCANF

#include <stdio.h>
 
int main() {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    return 0;
}

//ler string com espaços 

// char nome[50];
 
// printf("Digite seu nome completo: ");
 
// fgets(nome, 50, stdin); Lê no máximo 49 caracteres da entrada padrão (stdin)
 

// fgets inclui o '\n' na string, então podemos removê-lo se necessário
 
// nome[strcspn(nome, "\n")] = 0;
 

// printf("Nome completo digitado: %s\n", nome);