#include <stdio.h>

int main() {
    // Movimento das peças anteriores (mantido do desafio básico)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===================== MOVIMENTO DA TORRE (for) =====================
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===================== MOVIMENTO DO BISPO (while) =====================
    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // ===================== MOVIMENTO DA RAINHA (do-while) =====================
    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Linha em branco antes do movimento do Cavalo (requisito do desafio)
    printf("\n");

    // Definição das casas do movimento do Cavalo (diretamente no código)
    const int passosBaixo = 2;
    const int passosEsquerda = 1;

    // ===================== MOVIMENTO DO CAVALO (L em loops aninhados) =====================
    /*
        O Cavalo se move em "L":
        - 2 casas para baixo
        - 1 casa para a esquerda (perpendicular ao movimento anterior)

        A implementação usará:
        - Loop FOR como loop externo (obrigatório)
        - Loop WHILE como loop interno (aninhado)
    */

    printf("Movimento do Cavalo:\n");

    // Loop externo (FOR) → representa o controle geral do movimento
    for (int i = 1; i <= passosBaixo; i++) {

        // Loop interno (WHILE) → simula cada casa andando para baixo
        int j = 1;
        while (j <= 1) {  // Executa 1 vez por iteração do FOR
            printf("Baixo\n");
            j++;
        }
    }

    // Loop aninhado adicional obrigatório com FOR interno para a parte perpendicular
    int k = 1;
    while (k <= passosEsquerda) { // Loop externo WHILE para controlar o bloco de 1 movimento

        for (int m = 1; m <= 1; m++) { // FOR interno obrigatório (segundo aninhamento)
            printf("Esquerda\n");
        }

        k++;
    }

    // Fim da execução bem-sucedida
    return 0;
}
