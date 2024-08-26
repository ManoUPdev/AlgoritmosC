#include <stdio.h>

void needForSpeed();
float lerDistancia();
float lerTempo();
float calcularVelocidade(float distancia, float tempo);
void mostrarVelocidade(float velocidade);

int main() {
    needForSpeed();
    return 0;
}

void needForSpeed() {
    float distancia, tempo, velocidade;

    // ler a distancia percorrida
    distancia = lerDistancia();

    // ler o tempo necessario
    tempo = lerTempo();

    //Calcular a velocidade media
    velocidade = calcularVelocidade(distancia, tempo);

    //Mostrar a velocidade media
    mostrarVelocidade(velocidade);

}

float lerDistancia() {
    float distancia;
    printf("Digite a distancia percorrida (em quilometros): ");
    scanf("%f", &distancia);
    return distancia;
}

float lerTempo() {
    float tempo;
    printf("Digite o tempo necessario (em horas): ");
    scanf("%f", &tempo);
    return tempo;
}



float calcularVelocidade(float distancia, float tempo){
    if(tempo == 0) {
        printf("O tempo nao pode ser zero.\n");
        return 0;
    }
    return distancia / tempo;
}

void mostrarVelocidade(float velocidade) {
    printf("A velocidade media e: %.2f km/h\n", velocidade);
}