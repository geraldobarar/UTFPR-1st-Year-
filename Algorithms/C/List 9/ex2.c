/*ex6*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char frase[40];
    int i, tamanho;
    
    do
    {
        printf("Digite uma frase ate 40 letras:\n");
        gets(frase);
        tamanho = strlen(frase);    
    } while (tamanho > 40);
    
    for (i=0; i<tamanho; i++)
    {
        printf("%c\n", frase[i]);
        usleep(500000); 
    }
    
    return 0;
}
