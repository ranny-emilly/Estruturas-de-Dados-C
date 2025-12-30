#include <stdio.h>

int main()
{
  int n, i, sum[5000], num; 

  scanf("%d", &n);

  for(i = 0; i <=n/2; i++){
    sum[i] = i;
  }
 
  for(i = 0; i<= n/2; i++){
    printf("%d", sum[i]);
  }
    
    return 0;
}