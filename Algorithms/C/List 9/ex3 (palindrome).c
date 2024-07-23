/*ex3*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, tamanho;
    char FRASE[50], frase2[50];
    
    printf("Digite uma frase\n");
    gets(FRASE);
    
    tamanho = strlen(FRASE);
    
    for (i=0; i < tamanho; i++)
    {
        FRASE[i] = tolower(FRASE[i]);
    }
    
    for (i=0, j = tamanho-1;i<j; i++, j--)
    {
        if (FRASE[i] != FRASE[j])
        {
            printf("Não é palíndromo");
            return 0;
        }
    }
    
    printf("é Palindromo.");
    
    return 0;
}
