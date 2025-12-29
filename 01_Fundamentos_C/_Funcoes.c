// se eu quiser escrever uma função depois do main, devo declara-lá antes do main, mas posso passar os parâmetros depois do main
//isso serve para não poluir a função principal com 20 < funções GRANDES (em softwares) maiores
#include <stdio.h>
#include <stdlib.h>

//definindo uma função
// tipo nome(parâmetros){
//bloco return;}

float maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    }else
        {return num2;
        }
}

int main(){
    float x, y, m;
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);
    
//chamando a função

    m = maior(x,y);

    printf("O maior é %.2f", m);

}

//SINTAXE PARA PARÂMETROS STRUCTS
//tipo nome(tipo_struct <parâmetro>){};

//SINTAXE VETORES:
//tipo nome(tipo <vet>[], int tam) {}
//tipo nome (tipo <vet>[5]){}
//tipo nome(tipo * <vet>, int tam){}

//MATRIZES
//tipo nome(tipo m[<>] [<tamanho 2>], int tam1);




