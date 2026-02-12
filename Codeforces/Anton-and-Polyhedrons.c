#include <stdio.h>
#include <string.h>

const int Tetrahedron = 4;
const int Cube = 6;
const int Octahedron = 8;
const int Dodecahedron = 12;
const int Icosahedron = 20;

int main(){
    int total = 0, n;

    scanf("%d", &n);
    char cte[100];

    for(int i = 0; i < n; i++){
        
        scanf("%s", &cte);
        if (strcmp(cte, "Cube") == 0){
            total += Cube;
        }else if(strcmp(cte, "Octahedron") == 0){
            total += 8;
        }else if(strcmp(cte, "Icosahedron") == 0){
            total += Icosahedron;
        }else if(strcmp(cte, "Dodecahedron") == 0){
            total += Dodecahedron;
        }else if(strcmp(cte, "Tetrahedron") == 0){
            total += Tetrahedron;
            
    }    
     
}
   printf("\n%d", total);

    return 0;
}