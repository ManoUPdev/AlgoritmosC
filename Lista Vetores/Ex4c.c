#include <stdio.h>

int main() {
    int vetor[50];
    int i;
    int maior, menor;

    //leitura dos valores
    printf("Digite 50 valores inteiros:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializa maior e menor com o primeiro valor do vetor
    maior = menor = vetor[0];

    //Encontra o maior e o menor valor
    for(i = 1; i < 50; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    
    return 0;
}