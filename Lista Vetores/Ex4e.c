#include <stdio.h>

int main() {
    int vetor[20];
    int i;

    //Leitura dos valores
    printf("Digite 20 valores inteiros:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    //Exibe numeros positivos
    printf("Numeros positivos:\n");
    for(i = 0; i < 20; i++) {
        if(vetor[i] >= 0) {
            printf("%d", vetor[i]);
        }
    }

    printf("\n");

    //Exibe numeros negativos
    printf("Numeros negativos:\n");
    for(i = 0; i < 20; i++) {
        if(vetor[i] < 0) {
            printf("%d", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}