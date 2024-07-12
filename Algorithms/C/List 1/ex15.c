/*ex15*/

#include<stdio.h>

int main()
{
    int resultado, a;
    
    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    
    resultado = ((2 * (a%3))-a);
    
    printf("o Resutlado é %d", resultado);
    
    return 0;
}