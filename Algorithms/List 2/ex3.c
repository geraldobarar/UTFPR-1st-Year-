/*ex3*/

#include<stdio.h>

int main()
{
    int idade;
    
    printf("Qual é sua idade?");
    scanf("%d", &idade);
    
    if (idade < 0 || idade >100)
        printf("idade inválida");
    else if (idade > 1 && idade < 13)
        printf("Você é uma criança");
    else if (idade >= 13 && idade < 20)
        printf("Você é um adolescente");
    else if (idade >= 20 && idade < 60)
        printf("Você é um adulto");
    else
        printf("Você é um idoso");
        
    return 0;
}