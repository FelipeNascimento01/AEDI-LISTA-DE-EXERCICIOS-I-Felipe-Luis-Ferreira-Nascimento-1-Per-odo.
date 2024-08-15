#include <stdio.h>

int main() {
    float distancia, tempo, velocidade, litros;

     Solicita ao usuário o tempo gasto na viagem e a velocidade média
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade);

     Calcula a distância percorrida
    distancia = velocidade * tempo;

     Calcula a quantidade de litros de gasolina utilizados
    litros = distancia / 12; // O carro faz 12 km por litro

     Exibe a quantidade de litros utilizados
    printf("A quantidade de litros de gasolina utilizados é: %.2f\n", litros);

    return 0;
}

