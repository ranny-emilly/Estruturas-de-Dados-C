#include <stdio.h>

int main(void){
    float n, start, step, soma, subtracao, auxs, auxsub, auxm, mult, auxd, divi;
    int j, k;

    if (scanf("%f", &n) != 1) return 1;
    if (scanf("%f", &start) != 1) return 1;
    if (scanf("%d", &k) != 1) return 1;
    if (scanf("%f", &step) != 1) return 1;

    if (k <= 0) return 0; /* nada a imprimir se K for zero ou negativo */

    auxs = start;
    auxsub = start;
    auxm = start;
    auxd = start;

    printf("Tabuada de soma:\n");
    for (j = 0; j < k; j++) {
        soma = n + auxs;
        printf("%.2f + %.2f = %.2f\n", n, auxs, soma);
        auxs = auxs + step;
    }

    printf("Tabuada de subtracao:\n");
    for (j = 0; j < k; j++) {
        subtracao = n - auxsub;
        printf("%.2f - %.2f = %.2f\n", n, auxsub, subtracao);
        auxsub = auxsub + step;
    }

    printf("Tabuada de multiplicacao:\n");
    for (j = 0; j < k; j++) {
        mult = n * auxm;
        /* operador 'x' conforme enunciado/exemplo */
        printf("%.2f x %.2f = %.2f\n", n, auxm, mult);
        auxm = auxm + step;
    }

    printf("Tabuada de divisao:\n");
    for (j = 0; j < k; j++) {
        divi = n / auxd; /* realiza a divisão; assume entradas válidas conforme enunciado */
        printf("%.2f / %.2f = %.2f\n", n, auxd, divi);
        auxd = auxd + step;
    }

    return 0;
}
