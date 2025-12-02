#include <stdio.h>
#include <string.h>

int main() {
    // Definição das casas de movimentação (diretamente no código)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===================== MOVIMENTO DA TORRE (for) =====================
    // A Torre se move 5 casas para a direita em linha reta
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===================== MOVIMENTO DO BISPO (while) =====================
    // O Bispo se move 5 casas na diagonal para cima e à direita
    // Para representar a diagonal, imprimimos duas direções combinadas
    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // ===================== MOVIMENTO DA RAINHA (do-while) =====================
    // A Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Encerramento do programa com status de execução bem-sucedida
    return 0;
}