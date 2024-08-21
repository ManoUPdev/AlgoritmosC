#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    
    if (n == 0) {
        printf("O número deve ser diferente de zero.\n");
        return 1;
    }

    printf("Os múltiplos de %d entre 20 e 100 são:\n", n);

    int i = 20;
    while (i <= 100)
    {
        if (i % n == 0) {
            printf("%d ", i);  
        }
        i++;
    }

    printf("\n");

    return 0;
}
