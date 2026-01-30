#include <stdio.h>

int main(){
    int n, result, petya,vasya, tonya, qtd = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        result = 0;
        scanf("%d %d %d", &petya, &vasya, &tonya);
        result = petya + vasya + tonya;
            if(result >= 2){
                qtd++;
            }
    }
     printf("%d\n", qtd);

    return 0;
}