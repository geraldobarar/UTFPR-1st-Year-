/*pa*/

#include <stdio.h>

int main()
{
    int termo, razao, vezes, p=1, q=1, num=0, i, soma=0;
    printf("Primeiro número:\n");
    scanf("%d", &termo );
    printf("razão:\n");
    scanf("%d", &razao);
    printf("vezes:\n");
    scanf("%d", &vezes);
    
//quero só mostras os termos nas vezes pedidas

    for (i= vezes; i > 0; i--)
    {
        num = termo;
        termo = termo + razao;

        printf("%d°-> %d\n", p, num);
        p++;
    }
    
//quero mostrar a soma
    for (i = vezes; i>0; i--)
    {
        num= num + termo;
        termo = termo + razao;
        
        printf("%d", soma );
        q++;
    }
}