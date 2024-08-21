#include <stdio.h>

int main()
{
    int padrao, inicio, fim;

    
    printf("Informe o padrao de impressao (1, 2 ou 3): ");
    scanf("%d", &padrao);

    printf("Informe o numero inicial da sequencia: ");
    scanf("%d", &inicio);

    printf("Informe o numero final da sequencia: ");
    scanf("%d", &fim);

    int total_impressos = 0;

    printf("Os numeros sao:\n");

    for (int i = inicio; i <= fim; i++)
    {
        if (padrao == 1)
        {
            printf("%d ", i);  
            total_impressos++;
        }
        else if (padrao == 2 && i % 2 == 0)
        {
            printf("%d ", i);  
        }
        else if (padrao == 3 && i % 2 != 0)
        {
            printf("%d ", i); 
            total_impressos++;
        }
    }

    printf("\nForam impressos %d numeros.\n", total_impressos);

    return 0;
}
