#include <stdio.h>

int main() {
    float lado, area, dobro;

     Solicita ao usu�rio o comprimento do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

     Calcula a �rea do quadrado
    area = lado * lado;

     Calcula o dobro da �rea
    dobro = 2 * area;

     Exibe o dobro da �rea
    printf("O dobro da �rea do quadrado �: %.2f\n", dobro);

    return 0;
}

