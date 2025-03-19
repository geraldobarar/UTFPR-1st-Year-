/*Funcoes*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
        //TAMANHO
    /*int len, i;
    char nome[40];
    printf("Digite seu nome");
    gets(nome);
    len= strlen(nome);
    printf("\n%d", len);
    for (i=0; i<len; i++)
    {
        printf("endereço = %u\tChar = %c\tDec = %d\n",(unsigned)(nome+i), nome[i], (int)nome[i]);
    }
    */
    
    //COMPARACAO
    /*char s1[10]="ANA", s2[10]="PAULA";
    if (strcmp(s1,s2)==0)
        printf("Strings iguais");
    else
        printf("Strings diferentes");
    */
    
    //COPIA UMA STRING PRA OUTRA
    /*char s1[10]="", s2[10]="PAULA";
    strcpy(s1,s2);
    puts(s1);
    puts(s2);*/
    
    //TOLOWER e TOUPPER
    /*
    int i, tamanho;
    char minusculo[100]="", maiusculo[100]="";
    printf("Digite uma frase em MAIUSCULO:\n");
    gets(maiusculo);
    tamanho = strlen(maiusculo);
    for (i=0; i<tamanho; i++)
    {
        minusculo[i]=tolower(maiusculo[i]);
    }
    printf("Sentença em minusculo:\n");
    puts(minusculo);
    */
    
    //PROCURA DENTRO DE OUTRA
    /*
    char s1[40] = "Minha casa é pequena";
    char s2[40] = "Meu carro é vermelho";
    printf("Retorno da string 1: %s\n", strstr (s1, "casa"));
    printf("Retorno da string 2: %s\n", strstr (s2, "Meu"));
    printf("Retorno nulo:%s\n", strstr(s2, "bicicleta"));
    */
    
    //PROCURA
    char string1[500];
    char letra;
    printf("Digite uma string:\n");
    gets(string1);
    printf("Informe a letra para busca:\n");
    fflush(stdin);
    scanf("%c", &letra);
    if (strchr(string1, letra))
    {
        printf("A primeira ocorrência de %c é na posição %d\n", letra, strchr(string1, letra)-string1);
    }else
    {
        printf("Caracter nao encontrado.\n");
    }
    return 0;
}
