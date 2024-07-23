/*ex11*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[80], s2[80];
    int tamanho1, tamanho2, maior;
    
    printf("Digite uma palavra:\n");
    gets(s1);
    printf("Digite outra palavra:\n");
    gets(s2);
    
    tamanho1 = strlen(s1);
    tamanho2 = strlen(s2);
    
    if (strcmp(s1, s2)== 0)
    {
        printf("As palavraws são iguais");
    }else{
        printf("As palabvras são diferentes");
        if (tamanho1 > tamanho2)
        {
            maior = tamanho1;
        }else
        {
            maior = tamanho2;
        }
        printf("A maior palavra é: %d", maior);        
    }
    return 0;
}
