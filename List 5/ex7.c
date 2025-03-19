/*ex7*/

#include <stdio.h>

int main()
{
    int num=1, soma=0, i=0;
    float media;
    
    do
    {
        printf("Digite um valor inteiro (0 pra sair):\n");
        scanf("%d", &num);
        
        if (num != 0)
        {
            soma = soma + num;     
            i++;
        }
    }while (num != 0);
    
    if (num == 0)
    {
        media = soma / i;
        printf("A média dos %d numeros dados é de: %.1f", i, media);
    }
    return 0;
}
