#include <stdio.h>

// Funcao para ler e retornar a soma das atividades da avaliacao continuada
float lerContinuada() {
    float nota1, nota2, nota3;
    printf("Digite as notas das tres atividades da avaliacao continuada: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    return nota1 + nota2 + nota3;
}

// Funcao para ler e retornar a nota da avaliacao unificada
float lerUnificada() {
    float notaUnificada;
    printf("Digite a nota da avaliacao unificada: \n");
    scanf("%f", &notaUnificada);
    return notaUnificada;
}

// Funcao para calcular a media aritmetica entre a avaliacao continuada e a unificada
float calcularMedia(float somaContinuada, float notaUnificada) {
    return (somaContinuada / 3 + notaUnificada) / 2;
}

// Funcao para apresentar a media e, se aplicavel, uma mensagem de congratulacao
void mostrarMedia(float media) {
    printf("A media e: %.2f\n", media);
    if (media > 9.0) {
        printf("Parabens, Darwin!\n");
    }
}

int main() {
    float medias[5]; // Vetor para armazenar as medias de 5 alunos
    float maiorMedia = 0.0;
    int i, indiceMaiorMedia = 0;

    // Loop para calcular as medias dos 5 alunos
    for (i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);

        // Ler e somar as notas das atividades continuadas
        float somaContinuada = lerContinuada();

        // Ler a nota da avaliacao unificada
        float notaUnificada = lerUnificada();

        // Calcular a media do aluno
        medias[i] = calcularMedia(somaContinuada, notaUnificada);

        // Identificar se e a maior media ate o momento
        if (medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            indiceMaiorMedia = i;
        }
    }

    // Apresentar a maior media encontrada
    printf("\n\nAluno com o melhor desempenho:\n");
    mostrarMedia(maiorMedia);

    return 0;
}

