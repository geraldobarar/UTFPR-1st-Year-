/*ex1*/

#include <stdio.h>

int main()
{
    int altura=0, codigo, codalto, alto=0, baixo=999, codbaixo, i=0;
    do
    {
        printf("codigo do aluno:\n");
        scanf("%d", &codigo);
        printf("Altura:\n");
        scanf("%d", &altura);
        
        if (altura > alto)
        {
            alto = altura;
            codalto = codigo;
        }
        if (altura < baixo)
        {
            baixo = altura;
            codbaixo = codigo;
        }
        
        i++;
        
    } while (i < 5);
    
    printf("o aluno mais alto é: %d, com %d centimetros\n", codalto, alto);
    printf("o aluno mais baixo é: %d, com %d centimetros\n", codbaixo, baixo);

    return 0;
}
