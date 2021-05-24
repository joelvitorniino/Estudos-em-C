#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero, numeroA;
  
  // printf mostra algo para o usuário na tela
  printf("Digite o valor 1: \t");
  // o scanf ele atribui um valor a variável, o usuário que atribui.
  scanf("%d", &numero);

  printf("Digite o valor 2: \t");
  scanf("%d", &numeroA);

  printf("Resultado é: \t %d", numeroA * numero);

  return 0;
}