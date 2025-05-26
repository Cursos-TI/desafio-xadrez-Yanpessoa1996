#include<stdio.h>
int main(){

    //Titulo do desafio (Colorido)
    printf("\033[31mDesafio Nivel Aventureiro - Movimentando o cavalo!\033[0m\n\n");

    //Constante de movimentação do cavalo
    int const mov_1 = 2; //Primeiro movimento - Duas casas
    int const mov_2 = 1; //Primeiro movimento - Uma casa

    //Primeiro movimento do cavalo sempre direcionado a andar 2 casas - Usando For
    printf("Movimentação cavalo:\n");

    for (int i = 0; i < mov_1; i++)
    {
        printf("Baixo\n");
    }
    
    //Segundo movimento do cavalo sempre direcionado a andar 1 casa - Usando While
    int j = 0;

    while (j < mov_2)
    {
        printf("Esquerda\n\n\033[032mMovimento em L completo!\033[0m\n\n");
        j++;
    }
    
    return 0;
}