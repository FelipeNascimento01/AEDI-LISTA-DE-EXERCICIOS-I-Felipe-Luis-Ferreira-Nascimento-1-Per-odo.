#include <stdio.h>

int main() {
    float distancia, tempo, velocidade, litros;

     Solicita ao usu�rio o tempo gasto na viagem e a velocidade m�dia
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);
    printf("Digite a velocidade m�dia (em km/h): ");
    scanf("%f", &velocidade);

     Calcula a dist�ncia percorrida
    distancia = velocidade * tempo;

     Calcula a quantidade de litros de gasolina utilizados
    litros = distancia / 12; // O carro faz 12 km por litro

     Exibe a quantidade de litros utilizados
    printf("A quantidade de litros de gasolina utilizados �: %.2f\n", litros);

    return 0;
}

