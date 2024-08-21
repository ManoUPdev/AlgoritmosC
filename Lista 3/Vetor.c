#include <stdio.h>

int main()
{
    int vetor[10];
    int n, count = 0;

    
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    -
    printf("Digite um numero inteiro para verificar no vetor: ");
    scanf("%d", &n);

    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == n) {
            count++;
        }
    }

    
    printf("O numero %d aparece %d vezes no vetor.\n", n, count);

    return 0;
}
