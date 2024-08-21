#include <stdio.h>
#include <math.h>


double seno(double x);

int main()
{
    double radianos;
    printf("Digite o angulo em radianos: ");
    scanf("%lf", &radianos);

    printf("O seno de %.2lf radianos é %.6lf\n", radianos, seno(radianos));

    return 0;
}

double seno(double x)
{
    double resultado = 0.0;
    double termo;
    int i;

    for (i = 0; i < 10; i++) 
    {
        termo = (i % 2 == 0 ? 1 : -1) * pow(x, 2 * i + 1) / tgamma(2 * i + 2); 
        resultado += termo;

        
        if (fabs(termo) < 1e-10) 
        {
            break;
        }
    }

    return resultado;
}
