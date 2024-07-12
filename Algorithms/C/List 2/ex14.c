/*ex14*/

#include <stdio.h>

int main(){
    
    float indice;
    
    printf("Qual é o índice:\n");
    scanf("%f", &indice);
    
    if (indice > 0.05 && indice < 0.25){
        printf("Aceitável\n");
    } else if (indice >= 0.3 && indice < 0.4){
        printf("Primeiro grupo devem parar");
    } else if (indice >= 0.4 && indice <0.5){
        printf("Primeiro e Segundo grupos devem parar");
    } else{
        printf("todos parem\n");
    }
    
    return 0;
}