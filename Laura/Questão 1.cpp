#include <stdio.h>

int main() {
    float lado, area, dobro;

     Solicita ao usuário o comprimento do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

     Calcula a área do quadrado
    area = lado * lado;

     Calcula o dobro da área
    dobro = 2 * area;

     Exibe o dobro da área
    printf("O dobro da área do quadrado é: %.2f\n", dobro);

    return 0;
}

