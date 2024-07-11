/*ex2*/
 #include <stdio.h>
 #include <math.h>

int main()
{
    int base, expoente, resultado;
    
    printf ("Digite a base: \n");
    scanf ("%d", &base);
    printf ("Digite o expoente: \n");
    scanf ("%d", &expoente);
    
    resultado = pow (base, expoente);
    
    printf ("O resultado de %d elevado a %d é igual a %d", base, expoente, resultado);
    
    return 0;
}