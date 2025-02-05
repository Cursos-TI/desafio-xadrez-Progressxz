#include <stdio.h>

// Desafio de Xadrez

int main() {
    // Constantes para o número de casas que cada peça pode se mover
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Bispo move para a casa (%d, %d)\n", i, i);
    }

    // Movimentação da Torre (para a direita)
    printf("\nMovimentação da Torre:\n");
    int j = 1;
    while (j <= TORRE_MOV) {
        printf("Torre move para a casa (%d, 0)\n", j);
        j++;
    }

    // Movimentação da Rainha (para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Rainha move para a casa (-%d, 0)\n", k); //ja que o valor da casa atual é zero, então para representar a casa da esquerda o número vai ser negativo.
        k++;
    } while (k <= RAINHA_MOV);

    return 0;
}
