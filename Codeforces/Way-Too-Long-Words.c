#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
   int n, tamanho = 0;
   char s[100];

   scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", s[i]);
        tamanho = strlen(s);
            if(tamanho > 10){
                printf("%c%d%c", s[0], tamanho, s[100]);
                return 0;
            }

    }


    return 0;
}