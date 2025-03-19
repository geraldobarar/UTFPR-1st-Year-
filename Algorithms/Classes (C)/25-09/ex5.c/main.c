/*ex5*/


#include <stdio.h>
#include <math.h>

int main()
{
    float s = 0, x; 
    int exp = 25, denominador = 1;
    
    printf("Escreva o valor de x:\n");
    scanf("%f", &x);
    
    do 
    {
        if (exp % 2 ==0)
            s = s - (pow (x, exp))/denominador;
        else
            s = s + (pow (x, exp))/denominador;
        exp --;
        denominador ++;
    } while (denominador <= 25);
    
    printf("somatorio é %.2f\n", s);
    return 0;
}
