#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // divisão inteira

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente (int): %d\n", quociente);


    float x = 5.5;
    float y = 2.2;
    float somaa = x + y;
    float diferencaa = x - y;
    float produtoo = x * y;
    float quocientee = x / y;

    printf("Soma float: %.2f\n", somaa);
    printf("Diferença float: %.2f\n", diferencaa);
    printf("Produto float: %.2f\n", produtoo);
    printf("Quociente float: %.2f\n", quocientee);


    int n = 10;
    float m = 3.5;
    float resultado = n + m;

    printf("Resultado (int + float): %.2f\n", resultado);

    int v1 = 10;
    int v2 = 3;
    float quociente_cast = (float) v1 / v2;

    printf("Quociente (cast): %.2f\n", quociente_cast);

    return 0;
}
