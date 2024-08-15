#include <stdio.h>

int main() {
    float celsius, fahrenheit;

     Solicita ao usuário a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

     Converte a temperatura para graus Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

     Exibe a temperatura em graus Fahrenheit
    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}

