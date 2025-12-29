#include <stdio.h>

int main()
{
  int n, i, sum[5000], num, auxsum = 0; 

  scanf("%d", &n);

  for(i = 0; i <=n/2; i++){
    sum[i] = i;
  }
    printf("%d =", n);
 
  for(i = 1; i <=  n/2; i++){
    printf(" %d ", sum[i]);
    auxsum += sum[i];
    if(auxsum >= n){
        break;
    }
    printf("+");
  } 
  if(auxsum == n){
     printf("= %d (NUMERO PERFEITO)\n", auxsum);
  }else{
      printf("= %d (NUMERO NAO E PERFEITO\n", auxsum);
  }
    
    return 0;
}