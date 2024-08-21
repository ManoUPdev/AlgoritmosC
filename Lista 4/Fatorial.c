#include <stdio.h>

int fatorial(int n);

int main()
{
   int n;
   printf("Digite um numero inteiro para calcular o fatorial:");
   scanf("%d", &n);

   if(n < 0)
   {
    printf("Fatorial de um numero negativo nao e definido.\n");
    } else {
        printf("O fatorial de %d e %d.\n", n, fatorial(n));
   }

   return 0;

}

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n *fatorial(n-1);
}