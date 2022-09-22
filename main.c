/* Atividade Fibonacci */
/* Pietro Gagliardi */

#include <stdio.h>

int main(){
  int n , i, acc = 1; // Declaro as minhas variáveis
  scanf("%d", &n); //Leio o número de fibonacci digitado
  for (i=2; i<=n;i++){ 
    acc*=i;//acc*i
  }
  printf("n!=%d\n", acc);    //Retorno o valor dos meus cálculos
  
  return 0;
}