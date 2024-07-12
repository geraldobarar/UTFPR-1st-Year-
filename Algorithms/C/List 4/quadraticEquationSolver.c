/*ex17*/
#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c)
{
    float resultado;
    
    resultado = (pow(b,2)) - (4 * a * c);
    
    return resultado;
}


int main()
{
    float a, b, c, x1, x2, resultado;
    
    printf("Para uma Equação de Segundo Grau: ax^2+bx+c=0, forneça:\n");
    do
    {
        printf("Para A:\n");
        scanf("%f", &a);
    } while (a<=0);
    
    printf("Para B:\n");
    scanf("%f", &b);
    printf("Para C:\n");
    scanf("%f", &c);
        
    resultado = delta(a, b, c);
    
    if (resultado < 0 && a == 0)
    {
        printf("Não há raízes\n");
        return 0;
    }
        
    x1 = (-b+sqrt(resultado))/(2*a);
    x2 = (-b-sqrt(resultado))/(2*a);
    
    printf("As raízes da equação são: %.2f e %.2f", x1, x2);

    return 0;
}

