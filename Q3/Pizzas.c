#include <stdio.h>

int main () {
    float preco_queijo_kg;
    char tamanho_pizza;
    int num_fatias;
    float peso_queijo_por_fatia = 15.0 / 1000.0;
    float custo_queijo;


    printf("Informe o preco por Kg de queijo utilizado (R$/kg): ");
    scanf("%f", &preco_queijo_kg);

    printf("informe o tamanho da pizza(P, M, G, F):");
    scanf("%c", &tamanho_pizza);

    switch (tamanho_pizza) {
        case 'P':
           num_fatias = 6;
           break;

        case 'M':
           num_fatias = 8;
           break;

        case 'G':
            num_fatias = 10;
            break;
        case 'F':
            num_fatias = 12;
            break;
        default:
            printf("Tamanho de pizza invalido.\n");
            return 1;
    }

   
    custo_queijo = num_fatias * peso_queijo_por_fatia * preco_queijo_kg;

    printf("O custo do queijo da pizza e de: R$%.2f\n", custo_queijo);

    return 0;
}
