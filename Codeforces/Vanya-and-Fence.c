#include <stdio.h>

int main(){

    int numamigos, h, aux = 0, larg = 0;

    scanf("%d %d", &numamigos, &h);
    int alturamigos[numamigos];
    for(int i = 0; i < numamigos; i++){
        scanf("%d", &alturamigos[i]);
        aux += alturamigos[i];
       if(alturamigos[i] > h){
            larg++;
        }
       
    }

    printf("%d", larg+numamigos);
    return 0;
}

/* if(aux > h){
            numamigos++;
        }else{
            
        }*/