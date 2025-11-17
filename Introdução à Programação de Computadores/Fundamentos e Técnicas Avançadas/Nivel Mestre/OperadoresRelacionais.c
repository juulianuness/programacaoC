#include <stdio.h>
// Comparar variaveis e tomar decisões importantes dentro do codigo

int main() {

int a = 10;
int b = 20;

printf("a > b: %d\n", a > b);
printf("a < b: %d\n", a < b);
printf("a == b: %d\n", a == b);
printf("a != b: %d\n", a != b);

//conversão explicita 

float numero1 = 10.2;
int numero2 = 10;

printf("numero1 > numero2: %d\n", (int)numero1 > numero2); //o numero1 é convertido para int antes da comparação
printf("numerol numero2: %d\n", numero1 == numero2);

return 0;
}
 