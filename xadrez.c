#include <stdio.h>

#define Bispo 5
#define Torre 5
#define Rainha 8
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    return 0;
}
