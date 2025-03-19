/*ex3*/

#include <stdio.h>
#include <math.h>

float fatorial(int denominador)
{
    float resultado=1.0;
    for (int i=1; i<=denominador; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}


int main()
{
    
    int n, x, numerador, denominador=3, elemento, i, pot=2;
    float soma;
    printf("Quantos elementos:\n");
    scanf("%d", &n);
    printf("Qual o valor do numerador:\n");
    scanf("%d", &x);
    
    for (i=1; i<=n; i++)
    {
        numerador = pow (x, pot);
        
        elemento = (float)numerador / fatorial(denominador);
        
        printf("%d/%.2f\n", numerador, fatorial(denominador));      
        
        if(i%2!=0)
        {
            elemento = elemento * (-1);
        }
        
        soma = soma + elemento;
        
        pot += 2;
        denominador += 2;
    }
    
    
    printf("Soma: %.2f", soma+n);

    return 0;
}
