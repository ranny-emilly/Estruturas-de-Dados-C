/*Crie uma função chamada converter_celsius_fahrenheit.
Parâmetro: Ela deve receber um float temp_c (temperatura em Celsius).
Ação: Calcular a conversão usando a fórmula: $F = (C * 1.8) + 32$Retorno: Ela deve devolver (return) o valor em Fahrenheit.
Na main: Peça para o usuário digitar a temperatura, chame a função e mostre o resultado na tela.*/


#include <stdio.h>
#include <stdlib.h>

float converter_celsius_fahrenheit(float temp_c){
    float fah = (temp_c * 1.8) + 32;
    return fah;
}

int main(){

    float temp, grau;
    printf("Digite a temperatura:");
    scanf("%f", &temp);

    grau = converter_celsius_fahrenheit(temp);
    printf("Sao %.2f graus fahrenheit", grau);


    return 0;
}