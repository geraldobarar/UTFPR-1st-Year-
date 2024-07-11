/*ex12*/
/*
#include <stdio.h>

int main(){
   
   int i;
   float a, b, c;
   
   printf("Digite o valor de i:\n");
   scanf("%d", &i);
   printf("Digite os valores de a, b e c: \n");
   scanf("%f %f %f", &a, &b, &c);

   if (i = 1) //ordem crescente
       if (a >= b){
           if (b >= c){
                printf("%f, %f, %f\n", a, b, c);
           } else
                printf("%f, %f, %f\n", a, c, b);    
       } else if (b >= a){
           if (c >= b){
                printf("%f, %f, %f\n", c, b, a);                   
            } else{
                printf("%f, %f, %f", b, c, a);                  
            }
            
   } else if (i = 2){ //ordem decrescentes
        if (a >= b){
            if (b >= c){
                printf("%f, %f, %f\n", c, b, a);
            } else
                printf("%f, %f, %f\n", b, c, a);    
       } else if (b >= a){
           if (c >= b){
                printf("%f, %f, %f\n", a, b, c);                   
            } else{
                printf("%f, %f, %f", a, c, b);                  
            }

        if (b >= c){
            printf("%f, %f, %f\n", b, a, c);
        } else
            printf("%f, %f, %f\n", c, a, b);    
        } else if (b >= a){
            if (c >= b){
                printf("%f, %f, %f\n", c, b, a);                   
            } else{
                printf("%f, %f, %f", c, b, a);                  
            }
   }
   
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaração de variáveis
  int i;
  float a, b, c;

  // Leitura dos dados
  printf("Digite o valor de i: ");
  scanf("%d", &i);
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  // Impressão dos dados
  printf("Os valores lidos são: i = %d, a = %f, b = %f e c = %f\n", i, a, b, c);

  // Ordenação dos dados
  qsort(&a, 3, sizeof(float), float_cmp);

  // Saída dos dados
  if (i == 1) {
    // Ordem crescente
    printf("Ordem crescente: %f %f %f\n", a, b, c);
  } else if (i == 2) {
    // Ordem decrescente
    printf("Ordem decrescente: %f %f %f\n", a, b, c);
  } else if (i == 3) {
    // Maior no meio
    printf("Maior no meio: %f %f %f\n", a, b, c);
  } else {
    // Valor de i inválido
    printf("Valor de i inválido.\n");
  }

  return 0;
}

int float_cmp(const void *a, const void *b) {
  float x = *(float *)a;
  float y = *(float *)b;

  return x - y;
}

//fazer depois



