#include <stdio.h>

// Declaração da função
int classificarTriangulo(double x, double y, double z);

int main() {
    double lado1, lado2, lado3;
    int tipo;

    // Solicita ao usuário as medidas dos lados
    printf("Digite o comprimento do lado 1: ");
    scanf("%lf", &lado1);
    printf("Digite o comprimento do lado 2: ");
    scanf("%lf", &lado2);
    printf("Digite o comprimento do lado 3: ");
    scanf("%lf", &lado3);

    // Classifica o triângulo
    tipo = classificarTriangulo(lado1, lado2, lado3);

    // Exibe o tipo de triângulo
    switch(tipo) {
        case 0:
            printf("Nao e um triangulo.\n");
            break;
        case 1:
            printf("Triangulo equilatero.\n");
            break;
        case 2:
            printf("Triangulo isosceles.\n");
            break;
        case 3:
            printf("Triangulo escaleno.\n");
            break;
    } 

    return 0;
}

// Implementação da função classificarTriangulo
int classificarTriangulo(double x, double y, double z) {
    // Verifica se as medidas formam um triângulo válido
    if (x <= 0 || y <= 0 || z <= 0 || 
        x >= y + z || y >= x + z || z >= x + y) {
        return 0; // Não é um triângulo
    }

    // Verifica o tipo de triângulo
    if (x == y && y == z) {
        return 1; // Triângulo equilátero
    } else if (x == y || y == z || x == z) {
        return 2; // Triângulo isósceles
    } else {
        return 3; // Triângulo escaleno
    }
}
