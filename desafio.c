#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas, int movVertical) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1, movVertical);
}

void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
        
    for (int i = 0; i < 2; i++) { // Move duas casas para baixo
        printf("Baixo\n");
    }
    
    int j = 0;
    while (j < 1) { // Move uma casa para a esquerda
        printf("Direita\n");
        j++;
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo, casasBispo);
    
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);
    
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}