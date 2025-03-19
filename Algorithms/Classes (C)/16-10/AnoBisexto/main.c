/*ex01*/

#include <stdio.h>

int verificar(int ano)
{
    int resultado;
    if (ano % 400 == 0)
    {
       resultado = 1; 
    }else{
        resultado = 0;
    }
    
    return resultado;
}

int main()
{
    int ano, resultado;
    printf("Digite um ano:\n");
    scanf("%d", &ano);
    
    if (verificar(ano) == 1)
    {
        printf("É bissexto");
    }else
    {
        printf("Não é bissexto");
    }
    
    return 0;
}
