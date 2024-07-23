/*ex8*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40], s2[40];
    int tamanho, igual = 1, i;
    
    printf("digite seu email:\n");
    gets(s1);
    printf("digite novamente:\n");
    gets(s2);
    
    tamanho = strlen(s1);

    
    for (i=0; i<tamanho; i++)
    {
        if (s1[i]!=s2[i])
        {
            igual = 0;
        }
    }
    
    if (igual)
    {   
        printf("são iguais");        
    }else
    {
        printf("São diferentes");
    }


    return 0;
}
