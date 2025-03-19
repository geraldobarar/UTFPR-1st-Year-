//ex5

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#define T 10


int main()
{
    char FRASE[T];
    int i, tam;
    
    do
    {
        printf("digite uma palavra:\n");
        fgets(FRASE, 10, stdin); 
        tam = strlen(FRASE);
        if (tam>T)
        {
            printf("Tamanho maior\n");
        }
    } while (tam>tam);
    
    for (i=0; i<tam; i++)
    {
        printf("%c\n", FRASE[i]);
        sleep(1);
    }

    return 0;
}
