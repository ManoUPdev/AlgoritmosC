#include <stdio.h>

void mensagemDesempenho(float percentual);

int main()
{
    mensagemDesempenho(35.0);  //Deve imprimir: "You must improve yourself!"
    mensagemDesempenho(50.0);  //Deve imprimir: "Ok, But try a little harder next time..."
    mensagemDesempenho(75.0);  //Deve imprimir: "That was really good!"
    mensagemDesempenho(95.0);  //Deve imprimir: "Outstanding!!!"
    return 0;
}

void mensagemDesempenho(float percentual) {
      if(percentual <= 40.0) {
          printf("You must improve yourself!\n");
       } else if (percentual <= 60.0) {
          printf("Ok, but try a little harder next time...\n");
       } else if (percentual <= 90.0) {
          printf("That was really good!\n");
       } else if (percentual <= 100.0) {
          printf("Outstanding!!!\n");
       } else {
          printf("Percentual invalido. Deve estar entre 0 e 100.\n");

    } 
}