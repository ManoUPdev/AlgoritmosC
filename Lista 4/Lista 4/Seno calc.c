#include <stdio.h>

// Assinatura da função
double seno(double x);

int main() {
    double angulo, resultado;

    // Solicita ao usuário um ângulo em radianos
    printf("Digite o angulo em radianos: ");
    scanf("%lf", &angulo);

    // Calcula o seno do ângulo
    resultado = seno(angulo);

    // Exibe o resultado
    printf("O seno de %.2lf radianos e %.6lf.\n", angulo, resultado);

    return 0;
}

// Função para calcular o seno usando a série de Taylor
double seno(double x) {
    double termo = x; // Primeiro termo da série
    double resultado = 0.0;
    int i;
    
    // Soma dos primeiros 10 termos
    for (i = 0; i < 10; i++) {
        // Adiciona o termo ao resultado
        resultado += termo;

        // Calcula o próximo termo
        termo *= -x * x / ((2 * i + 2) * (2 * i + 3));
    }

    return resultado;
}
