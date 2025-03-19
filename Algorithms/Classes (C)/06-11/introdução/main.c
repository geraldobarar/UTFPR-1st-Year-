/*Vetores de caracteres*/

//vetores numericos
//era estruturas de dados homogeneas (pois são os mesmos tipos de dados)
//eram reais ou inteiros

//vetores de caracteres
//cadeia = strings
//temina com "/0"

#include <stdio.h>

int main()
{
    int i;
    char NOME[10];
    
    
    for (i=0; i<10; i++)
    {
        scanf(" %c", &NOME[i]); //de um em um
    }
    printf("Digite seu nome:/n");
    scanf("%s", NOME); //sem &, mas le so quandoa char um caracter em branco (%S)
    scanf("%c", NOME); //le espacos tbm

    gets(NOME); //Le enquanto nao precionar enter
    printf("Ola %s \n", NOME);
    puts("%s", NOME);
    
    
    
    printf("Ola, %s", NOME);


    return 0;
}
