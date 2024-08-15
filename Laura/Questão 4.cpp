#include <stdio.h>

int main() {
    float kgPescado, multa;
    float valorMulta = 4.00; // Valor da multa por Kg excedente

     Solicita ao usuário a quantidade de Kg de peixe pescado
    printf("Digite a quantidade de Kg de peixe pescado: ");
    scanf("%f", &kgPescado);

     Verifica se há multa a ser paga
    if (kgPescado > 50) {
        float kgExcedente = kgPescado - 50;
        multa = kgExcedente * valorMulta;
        printf("Kg excedente: %.2f\n", kgExcedente);
        printf("Valor da multa a ser pago: R$ %.2f\n", multa);
    } else {
        printf("Não há multa a ser paga.\n");
    }

    return 0;
}

