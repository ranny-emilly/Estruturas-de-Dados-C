/*O Desafio:Faça um programa que mostre um menu com 3 opções:
Calcular área do Quadrado ($lado * lado$).
Calcular área do Círculo (PI * raio^2$).
Sair.
Regras:Use switch case para ler a opção.
Use #define PI 3.14 lá no topo.
Se o usuário digitar uma opção inválida, mostre uma mensagem de erro (use o default).*/

#include <stdio.h>
#define PI 3.14

int main (){
    float areaQuadrado, areaCirculo, lado, raio;
    int num;

    printf("--- MENU ---\n1. Area do Quadrado\n2. Area do Circulo\n3. Sair\nEscolha:");

    scanf("%d", &num);

    switch(num){
        case 1:
        printf("Digite o lado do quadrado:\n");
        scanf("%f", &lado);

        areaQuadrado = lado*lado;

        printf("A area do quadrado e: %.2f \n", areaQuadrado);        
        break;

        case 2:
        printf("Digite o raio do circulo:\n");
        scanf("%f", &raio);

        areaCirculo = PI*(raio*raio);

        printf("A area do circulo e: %.2f\n", areaCirculo);        
        break;

        case 3:
        printf("Fechando Programa. Obrigada!\n");
        break;
        
        default:
        printf("Opcao Invalida\n");

    }
    

    return 0;
}