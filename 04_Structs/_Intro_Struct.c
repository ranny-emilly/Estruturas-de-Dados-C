#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrtura: typedef struct{
//}nome;

//Posso criar uma struct e usar ela dentro de outra. Ex, struct endereço e usar dentro de pessoa, pois estão co-relacionadas;
//Para usar endereço dentro de Pessoa, a struct endereço deve ser declarada ANTES de Pessoa.
typedef struct{
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

//outrs estrutura:
//struct nome{};

struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};

int main(){
    //como criar uma var com a primeira estrutura:
    Pessoa pessoa1;
    //atribuindo valores 
    pessoa1.idade = 20;
    pessoa1.sexo = 'f';
    //strcpy copia a var string para que eu possa atribuir valor. Lembrar da biblioteca
    strcpy(pessoa1.nome, "Emilly Ranny");
    printf("Nome: %s\nIdade: %d\nSexo %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    
    //como criar uma variavael com a segunda estrutura:
    struct Pessoa2 pessoa2;
    //utilização vai ser a mesma coisa, única coisa que muda é a forma de declarar var.
    
    
    
    return 0;
}
