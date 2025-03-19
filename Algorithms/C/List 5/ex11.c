/*ex11*/

#include <stdio.h>
#include <math.h>

int main()
{
    
    int x, i=2, denominador, y=1;
    float soma=0.0, elemento;
    
    printf("qual o valor de x:\n");
    scanf("%d", &x);
    
    while (i<=x)
    {
        denominador = pow(x, i);
    
        elemento = (1.0/denominador);
        soma = soma + elemento;
        printf("%d° = 1 / x^%d\n", y, denominador);
        i++;
        y++;    
    }
    
    
    printf("A soma é: %.2f\n", soma);
    
    return 0;
}

