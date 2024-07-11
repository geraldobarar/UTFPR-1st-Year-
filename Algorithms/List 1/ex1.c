/*ex2*/
 #include <stdio.h>
 #include <math.h>

int main()
{
    float base, expoente, resultado;
    
    printf ("Digite a base: \n");
    scanf ("%f", &base);
    printf ("Digite o expoente: \n");
    scanf ("%f", &expoente);
    
    resultado = pow (base, expoente);
    
    printf ("O resultado de %.2f elevado a %.2f é igual a %.2f", base, expoente, resultado);
    
    return 0;
}