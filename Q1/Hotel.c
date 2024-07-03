#include <stdio.h>


float calcular_total_conta(float valor_diaria, int num_dias, float valor_frigobar) {
    float subtotal = valor_diaria * num_dias + valor_frigobar;
    float imposto_municipal = subtotal * 0.035;
    float total_conta = subtotal + imposto_municipal;
    return total_conta;
}

int main() {
    float valor_diaria, valor_frigobar;
    int num_dias;


    printf("Informe o valor da diaria do hotel (R$): ");
    scanf("%f", &valor_diaria);

    printf("Informe o numero de dias: ");
    scanf("%d", &num_dias);

    printf("Informe o valor das despesas de frigobar (R$): ");
    scanf("%f", &valor_frigobar);

    
    float total_conta = calcular_total_conta(valor_diaria, num_dias, valor_frigobar);

    
    printf("O valor total a pagar e: R$ %.2f\n", total_conta);

    return 0;
}
