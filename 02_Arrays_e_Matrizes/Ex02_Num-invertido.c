#include <stdio.h>

int main() {
    int a, b;
    int invA = 0, invB = 0;

    
    scanf("%d %d", &a, &b);

    
    while (a > 0){
      invA = invA * 10 + (a%10);
      a = a/10;}
      
    while (b > 0){
        invB = invB * 10 + (b%10);
        b = b/10;}
        
        if (invA > invB){
            printf("%d\n", invA);
        }else {
            printf("%d\n", invB);
        }
      

    return 0;
}
