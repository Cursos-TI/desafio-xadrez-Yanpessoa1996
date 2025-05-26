#include<stdio.h>
int main(){
    //Titulo do desafio colorido
    printf("\33[31m");

    printf("Jogo de xadrez, nivel iniciante!\n\n");

    printf("\033[0m");

    //Constante para quantidade de movimentos
int const bispo_mov = 5;
int const torre_mov = 8;
int const rainha_mov = 8;

    //Mover bispo cinco casas para diagonal superior direita
printf("Movimentação Bispo:\n");
for (int i = 0; i < bispo_mov; i++)
{
    //Foi acrescentada a cor verde na movimentação do bispo indicando a conclusão do movimento em diagonal
    printf("Cima, Direita: \033[32mDiagonal Superior Direita\033[0m\n");  
}

printf("\n");

    //Mover torre cinco casas para direita
printf("Movimentação Torre:\n");
for (int i = 0; i < torre_mov; i++)
{
    printf("Direita\n");
}

printf("\n");

    //Mover rainha cinco casas para esquerda
    printf("Movimentação Rainha:\n");
    for (int i = 0; i < rainha_mov; i++)
    {
        printf("Esquerda\n");
    }

    return 0;

}
