/*O Desafio:Crie um programa que peça o peso (em kg) e a altura (em metros) de uma pessoa. 
Calcule o IMC e diga a situação dela.
Fórmula: IMC = peso / (altura * altura)
Regras: 
Se IMC < 18.5 -> Mostre "Abaixo do peso".
Se IMC entre 18.5 e 24.9 -> Mostre "Peso ideal".
Se IMC >= 25 -> Mostre "Sobrepeso".*/

#include <stdio.h>

int main (){
    float kg, metros, imc;

    printf("Insira seu peso em kg:\n");
    scanf("%f", &kg);

    printf("Insira sua altura em metros:\n");
    scanf("%f", &metros);

    imc = kg/(metros*metros);

    printf("Seu IMC e: %.2f\n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso");
    }else if(imc <= 24.9){
        printf("Peso Ideal");
    }else {
        printf("Sobrepeso");
    }

    return 0;
}