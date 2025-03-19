/*ex1*/
#include <stdio.h>
#include <string.h>

int main()
{
    char NOME[50];
    int tamanho, i;
    
    printf("Digite um nome:\n");
    gets (NOME);
    tamanho = strlen(NOME);
    
    NOME[strcspn(NOME, "\n")] = '\0';
    
    printf("Seu nome de trás para frente é:\n");
    
    for (i=tamanho - 1; i>=0; i--)
    {
        printf("%c", NOME[i]);   
    }

    return 0;
}