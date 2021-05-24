#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma, soma1;

    printf("Bem-vindo a calculadora feita em C \n");
    printf("Esta calculadora realiza as seguintes operações matemáticas: \n");
    printf("Soma, Subtração, Multiplicação e Divisão. \n");

    printf("\n Digite um número: \t");
    scanf("%d", &soma);

    printf("\n Digite outro número: \t");
    scanf("%d", &soma1);

    printf("O resultado da soma é: \t %d \n", soma + soma1);
}