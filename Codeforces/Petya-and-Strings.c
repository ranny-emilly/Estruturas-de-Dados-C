#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(){
    char primeir[100], segund[100];

    for(int i = 0; i < 100; i++){
        scanf("%s", &primeir[i]);
            if(primeir[i] == '\n'){
                break;
            }
            for(int j = 0; j < 100; j++){
                scanf("%s", &segund[j]);
                if(segund[j] == '\n'){
                    break;
                }
                
                  if(strcasecmp(primeir, segund) < 0){
                        printf("-1\n");

                    }else if(strcasecmp(primeir, segund) > 0){
                        printf("1\n");
                        
                    }else{
                        printf("0\n");
                        
                    }
                    
                    return 0;


        }
    
    }


    return 0;
}

// Versão simplificada possível:
/*
#include <stdio.h>
#include <strings.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);
    int r = strcasecmp(a, b);
    printf("%d\n", (r > 0) - (r < 0));
    return 0;
}
*/
