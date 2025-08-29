#include <stdio.h>

int main() {
  int i;

  for (i = 1; i <= 8; i++) {
    if (i == 1) printf("\nMovendo rainha 8 casas para a esquerda\n");
    printf("\nCasa %d -> Direita\n", i);
  }
  printf("\n--------------------------------------------------------\n");
  for (i = 1; i <= 5; i++) {
    if (i == 1) printf("\nMovendo torre 5 casas para a direita\n");
    printf("\nCasa %d -> Frente\n", i);
  }
  printf("\n--------------------------------------------------------\n");
  for (i = 1; i <= 5; i++) {
    if (i == 1) printf("\nMovendo bispo 5 casas na diagonal\n");
    printf("\nCasa %d -> Cima -> Direita\n", i);
  }
  printf("\n--------------------------------------------------------\n");
  return 0;
}
