#include <stdio.h>

int main(){

    int w;

    scanf("%d", &w);

    if(w > 100 || w < 0){
        return 0;
    }

    if(w == 2){
        printf("NO");
        return 0;
    }


    if(w%2 == 0){
        printf("YES\n");
    } else{
        printf("NO");
    }

    return 0;
}