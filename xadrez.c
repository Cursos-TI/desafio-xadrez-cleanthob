#include <stdio.h>

int main() {
  int movimento_completo = 1, i;

  // Movimentação rainha

  for (i = 1; i <= 8; i++) {
    if (i == 1) printf("\nMovendo rainha 8 casas para a esquerda\n");
    printf("\nCasa %d -> Direita\n", i);
  }
  printf("\n--------------------------------------------------------\n");

  // Movimentação torre
  for (i = 1; i <= 5; i++) {
    if (i == 1) printf("\nMovendo torre 5 casas para a direita\n");
    printf("\nCasa %d -> Frente\n", i);
  }
  printf("\n--------------------------------------------------------\n");

  // Movimentação bispo
  for (i = 1; i <= 5; i++) {
    if (i == 1) printf("\nMovendo bispo 5 casas na diagonal\n");
    printf("\nCasa %d -> Cima -> Direita\n", i);
  }
  printf("\n--------------------------------------------------------\n");

  // Movimentação cavalo

  while (movimento_completo--) {
    if (movimento_completo == 0) printf("\nMovendo cavalo 2 casas para cima\n");
    for (int i = 1; i < 3; i++) {
      printf("\nCasa %d -> Cima\n", i);
    }
    if (movimento_completo == 0)
      printf("\nMovendo cavalo 1 casa para a direita\n");
    printf("\nCasa %d -> Direita\n", movimento_completo + 1);
  }
}
