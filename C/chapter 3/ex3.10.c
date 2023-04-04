// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>

int main() {
  for (int i = 45; i < 61; i++){
    if (i%4==0)
    {
      printf("%d: divisivel\n", i);
      
    } else
    {
      printf("%d: indivisivel\n", i);
      
    }
    
    
    
  }
  
  return 0;
}