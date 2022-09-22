/* Atividade Fibonacci */
/* Pietro Gagliardi */

#include <stdio.h>

unsigned int fact(unsigned int n) {
  if (n==0 || n == 1)
    return 1;
  return n * fact(n-1);
  }



int main(){
  int n , i, acc = 1; // Declaro as minhas variáveis
  scanf("%d", &n); //Leio o número de fibonacci digitado
  for (i=2; i<=n;i++){ 
    acc*=i;//acc*i
  }
  printf("n!=%d\n", acc);    //Retorno o valor dos meus cálculos
  printf("n!=%d", acc, fact(n));
  
  return 0;
}

