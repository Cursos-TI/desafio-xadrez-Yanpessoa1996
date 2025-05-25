#include<stdio.h>
int main(){
    //Constante para quantidade de movimentos
int const bispo_mov = 5;
int const torre_mov = 8;
int const rainha_mov = 8;

    //Mover bispo cinco casas para diagonal superior direita
printf("Movimentação Bispo:\n");
for (int i = 0; i < bispo_mov; i++)
{
    printf("Cima, Direita: Diagonal Superior Direita\n");  
}

    //Mover torre cinco casas para direita
printf("Movimentação Torre:\n");
for (int i = 0; i < torre_mov; i++)
{
    printf("Direita\n");
}

    //Mover rainha cinco casas para esquerda
    printf("Movimentação Rainha:\n");
    for (int i = 0; i < rainha_mov; i++)
    {
        printf("Esquerda\n");
    }

}
