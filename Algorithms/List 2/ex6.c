/*ex6*/

#include<stdio.h>

int main()
{
    int numero;
    printf("Digite um número inteiro\n");
    scanf("%d", &numero);
    
    if (numero % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");
        
    if (numero > 0)
        printf("Positivo\n");
    else
        printf("Negativo");
        
    return 0; 
}