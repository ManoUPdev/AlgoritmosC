#include <stdio.h>
#include <string.h>

int main() {
    char modelo[20];
    int memoria;
    float valor;

    printf("Informe o modelo do processador (Core i5, Core i7, Core i9): ");
    fgets(modelo, sizeof(modelo), stdin); 
    modelo[strcspn(modelo, "\n")] = '\0'; 

    printf("Informe a quantidade de memoria (GB): ");
    scanf("%d", &memoria);

   
    if (strcmp(modelo, "Core i5") == 0) {
        if (memoria == 4) {
            valor = 3648.00;
        } else if (memoria == 8) {
            valor = 4379.00;
        } else {
            printf("Memoria invalida para o modelo Core i5.\n");
            return 1;
        }
    } else if (strcmp(modelo, "Core i7") == 0) {
        if (memoria == 8) {
            valor = 5700.00;
        } else if (memoria == 16) {
            valor = 5999.00;
        } else {
            printf("Memoria invalida para o modelo Core i7.\n");
            return 1;
        }
    } else if (strcmp(modelo, "Core i9") == 0) {
        if (memoria == 16) {
            valor = 37498.00;
        } else if (memoria == 32) {
            valor = 38819.00;
        } else {
            printf("Memoria invalida para o modelo Core i9.\n");
            return 1;
        }
    } else {
        printf("Modelo de processador invalido.\n");
        return 1;
    }

   
    printf("O valor a ser pago pelo cliente e: R$ %.2f\n", valor);

    return 0;
}
