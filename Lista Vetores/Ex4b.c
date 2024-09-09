#include <stdio.h>
#include <stdbool.h>

int main() {
    bool vetor[12];
    int i;

    // Inicializa o vetor
    for (i = 0; i < 6; i++) {
        vetor[i] = true;
    }
    for (i = 6; i < 12; i++) {
        vetor[i] = false;
    }

    // Exibe o vetor
    printf("Vetor lógico:\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
