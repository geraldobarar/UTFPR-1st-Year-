/*ex5**/
#include <stdio.h>

int main()
{
    char frase[20];
    int vogal=0, i, tamanho;
    
    printf("Escreva uma frase:\n");
    gets(frase);
    
    tamanho = strlen(frase);
    
    for (i=0; i<tamanho; i++)
    {
        if (frase[i]== 'a'||frase[i]=='e'||frase[i]=='i'||frase[i]== 'o'||frase[i]== 'u')
        {
            vogal++;
        }
    }
    
    printf("O número de vogais é: %d", vogal);

    return 0;
}
