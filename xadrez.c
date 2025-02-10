#include <stdio.h>

#define BISPO 5
#define TORRE 5
#define RAINHA 8
#define CAVALO_VERTICAL 2
#define CAVALO_HORIZONTAL 1

// Funções recursivas para movimentação das peças
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Diagonal Direita Cima\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverCavalo() {
    for (int i = 0; i < CAVALO_VERTICAL; i++) {
        printf("Baixo\n");
    }
    for (int i = 0; i < CAVALO_HORIZONTAL; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO);
    
    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE);
    
    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA);
    
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
