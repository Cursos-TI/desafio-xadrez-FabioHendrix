#include <stdio.h>

int main () {
    
    // Movimento da Torre (5 casas para a direita) com o loop for
    
    int casaTorre = 5;
    printf("Movimento da Torre:\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n"); //Imprime a direção do movimento
    }
    printf("Torre se moveu %d casas para a direita. \n", casaTorre);
    
    // Movimento do Bispo (5 casas na diagonal para cima e para a direita) com o loop while
    
    int casaBispo = 5, contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while(contadorBispo < casaBispo) {
        printf("Cima, direita\n");
        contadorBispo++;
    }
    printf("Bispo se moveu %d casas para a diagonal (cima e direita).\n", casaBispo);
    
    // Movimento da Rainha (8 casas para a esquerda) com o loop do-while
    
    int casaRainha = 8, contadorRainha = 0;
    printf("\nMovimento Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    }while(contadorRainha < casaRainha);
    printf("Rainha se moveu %d casas para a esquerda.\n", casaRainha);
    
    
    //Movimento do cavalo
    int movimentosBaixo = 2, movimentoEsquerda = 1;
    printf("\nMovimento do cavalo:\n");
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }
    
    int contadorEsquerda = 0;
    while(contadorEsquerda < movimentoEsquerda) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }
    
    printf("O cavalo se moveu no formato 'L': %d casas para a baixo e %d casa para a esquerda.", movimentosBaixo, movimentoEsquerda);
    
    
    return 0;
    
}
