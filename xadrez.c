#include <stdio.h>

void movimentarTorre(int casas) {
    if (casas == 0) {
        printf("Torre se moveu 5 casas para a direita.\n");
        return;
    }
    printf("Direita\n");
    movimentarTorre(casas - 1);
}

void movimentarBispo(int casas) {
    if (casas == 0) {
        printf("Bispo se moveu 5 casas para a diagonal (para cima e para a direita).\n");
        return;
    }
    for (int v = 0; v < casas; v++) {
        printf("Cima, ");
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
    movimentarBispo(0);
}

void movimentarRainha(int casas) {
    if (casas == 0) {
        printf("Rainha se moveu 8 casas para a esquerda.\n");
        return;
    }
    printf("Esquerda\n");
    movimentarRainha(casas - 1);
}

void movimentarCavalo() {
    printf("\nMovimento do cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
    printf("Cavalo se moveu no formato 'L': 2 casas para cima e 1 casa para a direita.\n");
}

int main() {
    printf("\nMovimento da torre:\n");
    movimentarTorre(5);

    printf("\nMovimento do bispo:\n");
    movimentarBispo(5);

    printf("\nMovimento da rainha:\n");
    movimentarRainha(8);

    movimentarCavalo();

    return 0;
}
