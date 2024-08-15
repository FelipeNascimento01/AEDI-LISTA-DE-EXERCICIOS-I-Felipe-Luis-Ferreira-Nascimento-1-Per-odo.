#include <stdio.h>
#include <math.h> // Para a função sqrt()

int main() {
    float num1, num2;
    float produto, soma, raizQuadrada;

     Solicita ao usuário dois números reais
    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);
    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

     Calcula o produto do dobro do primeiro número
    produto = 2 * num1 * num1;
    
     Calcula a soma do triplo do primeiro número com a metade do segundo número
    soma = 3 * num1 + (num2 / 2);
    
     Calcula a raiz quadrada da soma dos dois números
    raizQuadrada = sqrt(num1 + num2);

     Exibe os resultados
    printf("O produto do dobro do primeiro número é: %.2f\n", produto);
    printf("A soma do triplo do primeiro número com a metade do segundo número é: %.2f\n", soma);
    printf("A raiz quadrada da soma dos dois números é: %.2f\n", raizQuadrada);

    return 0;
}

