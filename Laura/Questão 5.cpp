#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    float percentualDistribuidor = 28.0 / 100; // 28%
    float percentualImpostos = 45.0 / 100;     // 45%

     Solicita ao usu�rio o custo de f�brica do carro
    printf("Digite o custo de f�brica do carro: R$ ");
    scanf("%f", &custoFabrica);

     Calcula o valor final ao consumidor
    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

     Exibe o custo final ao consumidor
    printf("O valor final a ser pago pelo consumidor �: R$ %.2f\n", custoConsumidor);

    return 0;
}

