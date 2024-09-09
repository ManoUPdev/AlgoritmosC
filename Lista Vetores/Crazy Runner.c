#include <stdio.h>

int main() {
    int itens[5];
    int i;

    //Leitura dos itens
    for (i = 0; i < 5; i++) {
        printf("Digite o tipo de item coletado (numero inteiro): ");
        scanf("%d", &itens[i]);
    }

    //Imprime os itens coletados
    printf("Itens coletados:\n");
    for(i = 0; i < 5; i++) {
        printf("Item %d: %d\n", i + 1, itens[i]);
    }

    return 0;
}