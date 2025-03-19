/*ex3*/

#include <stdio.h>

int main()
{
    float n1, n2;
    printf("escreva o primeiro número: \n");
    scanf("%f", &n1);
    printf("escreva o segundo número: \n");
    scanf("%f", &n2);
    
    printf("Para os números %.2f e %.2f: \nTemos a soma: %.2f \nO produto: %.2f\nA divisão: %.2f\nA subtração: %.2f \n", n1, n2, n1+n2, n1*n2, n1/n2, n1-n2);
}
