#include <stdio.h>

int main() {
    int binario[8];
    int i;
    int numero = 42;
    int decimal = 0;

    //Leitura da sequencia binaria
    printf("Digite a sequencia binaria de 8 bits:\n");
    for(i = 0; i < 8; i++) {
        printf("Bit %d:", i + 1);
        scanf("%d", &binario[i]);
    }

    //Conversão de binário para decimal
    for(i = 0; i < 8; i++) {
        decimal += binario[i] << (7 - 1);
    }

    //Validacao
    if(decimal == 42) {
        printf("A sequencia binaria corresponde ao numero 42.\n");
        } else {
            printf("A sequencia binaria nao corresponde ao numero 42.\n");
    }

    return 0;
}