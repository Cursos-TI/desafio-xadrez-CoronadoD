#include <stdio.h>

#define Bispo 5
#define Torre 5
#define Rainha 8
#define Cavalo_Vertical 2
#define Cavalo_Horizontal 1
// Desafio de Xadrez - MateCheck


int main() {
    // Movimentação das peças
    printf("Movimenteção do Bispo\n");

    for (int i = 0; i < Bispo; i++)
    {
        printf("Cima-Direita\n");
    }
    
    printf(" Movimentação da Torre\n");
    for (int i = 0; i < Torre; i++)
    {
        printf("Direita\n");
    }
    
        printf(" Movimentação da Rainha\n");
    for (int i = 0; i < Rainha; i++)
    {
        printf("Esquerda\n");
    }

        printf(" Movimentação Cavalo\n");
    for (int i = 0; i < Cavalo_Vertical; i++)
    {
        printf("Baixo\n");
    }

    int movimentos_horizontais = 0;
    while (movimentos_horizontais < Cavalo_Horizontal)
    {
        printf("Esquerda\n");
        movimentos_horizontais++;
    }
    

    return 0;
}
