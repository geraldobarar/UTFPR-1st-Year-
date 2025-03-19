#include <stdio.h>
#include <string.h>

int main()
{
    /*
    int i;
    char NOME[10];
    for (i=0;i<10;i++)
    {
        scanf("%c", &NOME[i]);
    }
    */
    
    /*
    char NOME[10] = "ana";
    char NOMES[10] = {"Geraldo"};
    char NOME2[20] = "Geraldo Baranoski";
    printf("%s", NOME);//mostra inteiro
    printf("%c", NOMES[0]);//c mostra só o primeiro
    printf("%s",  NOME2);// Mostra com espaço
    */
    
    char NOME[40];
    printf("Digite sue nome:\n");
    gets(NOME);
    printf("Ola, %s", NOME); //le só ate o espaço

    return 0;
}
