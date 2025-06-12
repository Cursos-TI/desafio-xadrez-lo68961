#include <stdio.h>

int main() {
    int i;


    printf("Movimentação do Bispo (diagonal superior direita):\n");
    for (i = 0; i < MOV_BISPO; i++) {
        printf("Cima + Direita\n");
    }
    printf("\n");

    printf("Movimentação da Torre (5 casas para a direita):\n");
    for (i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    for (i = 0; i < MOV_RAINHA; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    return 0;
}
