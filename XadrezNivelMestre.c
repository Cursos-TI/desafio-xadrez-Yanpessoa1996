#include <stdio.h>

// Função recursiva para mover o Bispo
void moverBispo(int mov) {
    if (mov == 0) return;
    printf("Cima, Direita: \033[32mDiagonal Superior Direita\033[0m\n");
    moverBispo(mov - 1);
}

// Função recursiva para mover a Torre
void moverTorre(int mov) {
    if (mov == 0) return;
    printf("Direita\n");
    moverTorre(mov - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int mov) {
    if (mov == 0) return;
    printf("Esquerda\n");
    moverRainha(mov - 1);
}

int main() {
    // Título
    printf("\033[31mDesafio Nível Mestre - Movimentação com Recursão e Condições!\033[0m\n\n");

    // Constantes
    const int bispo_mov = 5;
    const int torre_mov = 5;
    const int rainha_mov = 8;

    printf("\033[34mMovimentação Bispo:\n\033[0m");
    moverBispo(bispo_mov);
    printf("\n");

    printf("\033[34mMovimentação Torre:\n\033[0m");
    moverTorre(torre_mov);
    printf("\n");

    printf("\033[34mMovimentação Rainha:\n\033[0m");
    moverRainha(rainha_mov);
    printf("\n");

    // Movimentação do Cavalo com loops aninhados, múltiplas condições, break e continue
    printf("\033[34mMovimentação Cavalo:\n\033[0m");

    const int mov_baixo = 2;  // Primeiro movimento de duas casas
    const int mov_esquerda = 1; // Sugundo movimento de uma casa 

    for (int i = 0; i < mov_baixo; i++) {
        printf("Baixo\n");

        for (int j = 0; j < mov_esquerda + 1; j++) {
            if (j == mov_esquerda) {
                break;  // Sai do loop quando já moveu para a esquerda
            }
            if (i == 0) {
                continue;  // Na primeira vez que desce, apenas continua sem mover para a esquerda
            }
            printf("Esquerda\n");
        }
    }

    printf("\033[32mMovimento em L completo!\033[0m\n\n");

    printf("\033[031mFinal do desafio! Obrigado (:\033[0m\n");

    return 0;
}
