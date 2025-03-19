#include <stdio.h>
#include <string.h>

int main()
{
    char c[80], frase[80] = "Linguagem de programaçào";
    int i, tamanho;
    
    tamanho = strlen(frase);
    
    for (i=0; i<=tamanho; i++)
    {
        c[i]=frase[i];
    }
    
    printf("essa é a cópia: %s\n", c);
    printf("Essa é a frase: %s", frase);

    
    return 0;
}

