/*ex16*/

#include<stdio.h>

int main(){
    
    float x, y, z;
    
    printf("Digite o valor de x, y, z:\n");
    scanf("%f %f %f", &x, &y, &z);
    
    if (x+y>z && x+z>y && y+z>x){
        printf("É possível ser um triângulo\n");
        if(x == y && y == z){
            printf("Equilátero\n");
        } else if (x==y || x==z || y==z){
            printf("Isóceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Não é triângulo\n");
    }   
    
    return 0;
}