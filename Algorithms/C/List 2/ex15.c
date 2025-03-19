/*ex15*/

#include <stdio.h>

int main(){
    float x, y;
    
    printf("Qual a coordenada de x:\n");
    scanf("%f", &x);
    printf("Qual a coordenada de y:\n");
    scanf("%f", &y);
    
    if (x > 0){
        if (y>0){
            printf("Primeiro Quadrante\n");
        } else{
            printf("Quarto  Quadrante");
        }
    } else if (x < 0){
        if (y>0){
            printf("Segundo Quadrante");
        } else{
            printf("Terceiro Quadrante");
        }
    }
        
    if (x == 0){
        printf("Está no eixo x");
    } else if (y == 0){
        printf("Está no eixo y");
    }
    
    return 0;
}