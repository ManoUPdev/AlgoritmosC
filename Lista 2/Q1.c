#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero menor do que 100: ");
    scanf("%d", &n);

    if (n >= 100) 
    {
        printf("O numero deve ser menor do que 100.\n");
        return 1;
    }

    printf("Os numeros entre %d e 100 sao, em ordem decrescente:\n", n);
    for (int i = 100; i >= n; i--)
    {
        printf("%d ", i);  
    }
    printf("\n");

    return 0;
}
