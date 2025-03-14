#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo usando loops aninhados
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0 || horizontais == 0) return;
    for (int i = 0; i < horizontais; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(verticais - 1, horizontais - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    int i, j;

    // Movimento da Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    // Movimento do Bispo
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(5, 5);

    // Movimento da Rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    // Movimento do Cavalo usando loops aninhados
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    for (i = 0; i < 2; i++) {  // Movimento para cima
        printf("Cima\n");
        for (j = 0; j < 1; j++) {  // Movimento para a direita
            if (i == 1) {  // Só se move para a direita após subir duas casas
                printf("Direita\n");
                break;
            }
        }
    }

    return 0;
}
