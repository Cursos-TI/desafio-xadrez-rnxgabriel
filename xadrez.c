#include <stdio.h>

// Constantes para o número de casas a serem movidas
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8
#define CASAS_CAVALO 1

// Função recursiva para mover o Bispo (diagonal cima-direita)
void moveBispo(int casas) {
    // Condição de parada: se não há mais casas a mover, retorna
    if (casas <= 0) return;
    // Imprime o movimento diagonal
    printf("Cima, Direita\n");
    // Chama recursivamente para a próxima casa
    moveBispo(casas - 1);
}

// Função recursiva para mover a Torre (direita)
void moveTorre(int casas) {
    // Condição de parada: se não há mais casas a mover, retorna
    if (casas <= 0) return;
    // Imprime o movimento para a direita
    printf("Direita\n");
    // Chama recursivamente para a próxima casa
    moveTorre(casas - 1);
}

// Função recursiva para mover a Rainha (esquerda)
void moveRainha(int casas) {
    // Condição de parada: se não há mais casas a mover, retorna
    if (casas <= 0) return;
    // Imprime o movimento para a esquerda
    printf("Esquerda\n");
    // Chama recursivamente para a próxima casa
    moveRainha(casas - 1);
}

// Função para mover o Cavalo (1 movimento em L: cima e direita)
void moveCavalo() {
    // Loop externo para controlar o número de movimentos em L
    for (int move = 1; move <= CASAS_CAVALO; move++) {
        int direcao = 1; // Controla as direções (1: Cima, 2: Direita)
        // Loop interno para as duas partes do movimento em L
        while (direcao <= 2) {
            // Evita direções inválidas com continue
            if (direcao != 1 && direcao != 2) {
                direcao++;
                continue;
            }
            // Imprime a direção correspondente
            if (direcao == 1) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            direcao++;
            // Sai do loop após as duas direções serem impressas
            if (direcao > 2) {
                break;
            }
        }
    }
}

// Função principal
int main() {
    // Movimentação do Bispo
    printf("Movimento do Bispo (%d casas na diagonal cima-direita):\n", CASAS_BISPO);
    moveBispo(CASAS_BISPO);

    // Movimentação da Torre
    printf("\nMovimento da Torre (%d casas para a direita):\n", CASAS_TORRE);
    moveTorre(CASAS_TORRE);

    // Movimentação da Rainha
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", CASAS_RAINHA);
    moveRainha(CASAS_RAINHA);

    // Movimentação do Cavalo
    printf("\nMovimento do Cavalo (%d vez em L - cima e Fluida):\n", CASAS_CAVALO);
    moveCavalo();

    return 0;
}