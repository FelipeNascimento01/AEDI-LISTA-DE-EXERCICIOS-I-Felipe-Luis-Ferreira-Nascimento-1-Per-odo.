#include <stdio.h>
#include <math.h> // Para a fun��o sqrt()

int main() {
    float num1, num2;
    float produto, soma, raizQuadrada;

     Solicita ao usu�rio dois n�meros reais
    printf("Digite o primeiro n�mero real: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero real: ");
    scanf("%f", &num2);

     Calcula o produto do dobro do primeiro n�mero
    produto = 2 * num1 * num1;
    
     Calcula a soma do triplo do primeiro n�mero com a metade do segundo n�mero
    soma = 3 * num1 + (num2 / 2);
    
     Calcula a raiz quadrada da soma dos dois n�meros
    raizQuadrada = sqrt(num1 + num2);

     Exibe os resultados
    printf("O produto do dobro do primeiro n�mero �: %.2f\n", produto);
    printf("A soma do triplo do primeiro n�mero com a metade do segundo n�mero �: %.2f\n", soma);
    printf("A raiz quadrada da soma dos dois n�meros �: %.2f\n", raizQuadrada);

    return 0;
}

