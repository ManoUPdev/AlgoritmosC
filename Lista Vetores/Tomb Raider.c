#include <stdio.h>

int main() {
    int itens[20];
    int i;
    int arma = 0, medipack = 0, tesouro = 0;

       //Leitura dos dados
       for (i = 0; i < 20; i++) {
         printf("Digite o tipo de item coletado (1-Arma, 2-Medipack, 3-Tesouro): ");
         scanf("%d", &itens[i]);
      
       //Contagem dos itens por categoria
       switch(itens[i]) {
           case 1:
             arma++;
             break;
            case 2:
               medipack++;
               break;
            case 3:
               tesouro++;
               break;
            default:
               printf("Tipo de item invalido!\n");       
       }
    }

    //Exibicao de contagem
    printf("Itens coletados:\n");
    printf("Armas: %d\n", arma);
    printf("Medipacks: %d\n", medipack);
    printf("Tesouros: %d\n", tesouro);

    return 0;
}