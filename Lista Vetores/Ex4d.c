#include <stdio.h>

int main() {
    float vetor[100];
    int i;
    int maioresQue4 = 0, menoresQue7 = 0;

    //Leitura dos valores
    printf("Digite 100 valores reais:\n");
    for (i = 0; i < 100; i++) {
        scanf("%f", &vetor[i]);
    }

    //Contagem de valores
    for (i = 0; i < 100; i++) {
        if(vetor[i] > 4) {
            maioresQue4++;
        }
        if(vetor[i] < 7) {
            menoresQue7++;
        }
    }

    printf("Quantidade de valores maiores que 4: %d\n", maioresQue4);
    printf("Quantidade de valores menores que 4: %d\n", menoresQue7);

    return 0;
}