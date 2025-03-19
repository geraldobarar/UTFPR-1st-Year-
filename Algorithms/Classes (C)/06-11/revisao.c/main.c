/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    
    /*
    int i;
    char NOME[10];
    for (i=0; i<10; i++)
    {
        scanf(" %c", &NOME[i]);
    }
    
    printf("%s", NOME);
    
    for (i=0; i<10; i++)
    {
        printf("%c", NOME[i]);        
    }
    */
    
    /*char NOME[40];
    printf("Digite seu nome:");
    scanf("%s", NOME);
    printf("Ola %s", NOME);
    return 0;
    */
    
    /*char NOME[40];
    printf("Digite seu nome:");
    gets(NOME);
    printf("Olá %s", NOME);
    return 0;
    */
    
    /*char ch;
    printf("Pressione uma tecla:\n");
    ch = getchar();
    putchar(ch);
    return 0;
    */
    
    int len, i;
    char nome[80];
    printf("Digite seu nome:\n");
    gets(nome);
    len = strlen(nome);
    printf("\n%d", len);
    for (i=0; i<len; i++)
    {
        printf("Endereço= %u\tChar=%c\tDec = %d\n", (unsigned)(nome+i)()nome[i], (int)nome[i]);
    }
    return 0;
    
}
