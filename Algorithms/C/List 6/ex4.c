/*ex4*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i=0, e= 25, numerador, denominador=1, x;
    float soma=0.0, elemento;
    
    printf("qual o valor de x:\n");
    scanf("%d", &x);
    
    do
    {
        numerador = pow (x, e);
        
        elemento = (float)numerador/denominador;
        
        if(i%2!=0)
        {
            elemento = elemento * (-1);
        }
        
        printf("%d/%d\n", numerador, denominador);
        
        soma = soma + elemento;
        
        e--;
        denominador++;
        i++;
        
    }while (e > 0);
    
    
    printf("Soma %.2f", soma);

    return 0;
}
