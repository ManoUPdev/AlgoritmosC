
#include <stdio.h>

int fatorial(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if(numero < 0) {
      printf("O fatorial nao e definido para numero negativos.\n");
   } else {
      printf("O fatorial de %d e %d.\n", numero, fatorial(numero));

   }  

   return 0;
} 

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }

    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}