#include <stdio.h>

int main() {
    float vetor[10];
    int i;
    float produto = 1;

    //Leitura dos vetores
    for(i = 0; i < 10; i++) {
        printf("Digite o valor fracionario na posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }

    //Calculo do produto dos valores das posicoes pares
    for(i = 0; i < 10; i += 2) {
        produto *= vetor[i];
    }
    
    printf("produto dos valores das posicoes pares: %.2f\n", produto);

    return 0;
}