#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Objetivo: Desenvolver movimentações de peças de xadrez usando estruturas de repetição e recursão.
// Níveis: Novato, Aventureiro e Mestre

// NÍVEL MESTRE - Funções recursivas
void moverBispoRecursivo(int movimentos) {
    if (movimentos == 0) return;
    printf("Cima + Direita\n");
    moverBispoRecursivo(movimentos - 1);
}

void moverTorreRecursivo(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(movimentos - 1);
}

void moverRainhaRecursivo(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(movimentos - 1);
}

int main() {
    // Constantes de movimentação
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    int i;

    // ===========================
    // 🏅 NÍVEL NOVATO
    // ===========================
    printf("=== NÍVEL NOVATO ===\n");

    // Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < MOV_BISPO; i++) {
        printf("Cima + Direita\n");
    }
    printf("\n");

    // Torre (5 casas à direita)
    printf("Movimentação da Torre:\n");
    for (i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Rainha (8 casas à esquerda)
    printf("Movimentação da Rainha:\n");
    for (i = 0; i < MOV_RAINHA; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    // ===========================
    // 🏅 NÍVEL AVENTUREIRO
    // ===========================
    printf("=== NÍVEL AVENTUREIRO ===\n");

    // Cavalo em L (baixo + esquerda), usando for e while
    printf("Movimentação do Cavalo:\n");
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");

        int j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }

        printf("---\n");  // separador de movimento
    }
    printf("\n");

    // ===========================
    // 🥇 NÍVEL MESTRE
    // ===========================
    printf("=== NÍVEL MESTRE ===\n");

    // Bispo com recursão
    printf("Movimentação do Bispo (recursiva):\n");
    moverBispoRecursivo(MOV_BISPO);
    printf("\n");

    // Torre com recursão
    printf("Movimentação da Torre (recursiva):\n");
    moverTorreRecursivo(MOV_TORRE);
    printf("\n");

    // Rainha com recursão
    printf("Movimentação da Rainha (recursiva):\n");
    moverRainhaRecursivo(MOV_RAINHA);
    printf("\n");

    // Cavalo com múltiplas variáveis e controle de fluxo
    printf("Movimentação do Cavalo (múltiplas variáveis, com break/continue):\n");
    int x, y;
    for (x = 0, y = 2; x < 3 && y >= 0; x++, y--) {
        if (x == y) {
            continue;  // ignora quando x == y
        }

        printf("Cima\n");
        printf("Direita\n");

        if (x + y > 3) {
            break;  // exemplo de parada forçada
        }

        printf("---\n");
    }

    return 0;
}
