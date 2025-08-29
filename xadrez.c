#include <stdio.h>

void mover_rainha(int i) {
  // Movimentação rainha

  if (i > 0) {
    printf("\nEsquerda\n", i);
    mover_rainha(--i);
  }
}

void mover_torre(int i) {
  // Movimentação torre

  if (i > 0) {
    printf("\nDireita\n", i);
    mover_torre(--i);
  }
}

void mover_bispo(int i) {
  // Movimentação bispo
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 1; j++) {
      printf("\nCima\n", i);
      printf("\nDireita\n", j);
    }
  }
}

void mover_cavalo() {
  // Movimentação cavalo

  int movimento_completo = 1;

  while (movimento_completo--) {
    if (movimento_completo == 0) printf("\nMovendo cavalo 2 casas para cima\n");

    for (int i = 1, movimento_completo = 1; i < 3; i++, movimento_completo--) {
      printf("\nCima\n", i);
    }

    if (movimento_completo == 0)
      printf("\nMovendo cavalo 1 casa para a direita\n");

    printf("\nDireita\n", movimento_completo + 1);
  }
}

int main() {
  printf("\n--------------------------------------------------------\n");

  printf("\nMovendo rainha 8 casas para a esquerda\n");

  mover_rainha(8);

  printf("\n--------------------------------------------------------\n");

  printf("\nMovendo torre 5 casas para a direita\n");

  mover_torre(5);

  printf("\n--------------------------------------------------------\n");

  printf("\nMovendo bispo 5 casas na diagonal\n");

  mover_bispo(5);

  printf("\n--------------------------------------------------------\n");

  mover_cavalo();

  printf("\n--------------------------------------------------------\n");

  return 0;
}
