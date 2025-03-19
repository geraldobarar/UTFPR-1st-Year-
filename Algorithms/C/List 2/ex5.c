/*ex5*/

#include<stdio.h>

int main()
{
    int codigo;
    float n1, n2, n3, media;
    
    printf("Qual é o código do aluno?\n");
    scanf("%d", &codigo);
    printf("Qual foi a primeira nota:\n");
    scanf("%f", &n1);
    printf("Qual é a segunda nota:\n");
    scanf("%f", &n2);
    printf("Qual foi a terceira nota: \n");
    scanf("%f", &n3);
    
    media = ((n1 * 0.4) + (n2 * 0.3) + (n3 * 0.4)) / 3;
    
    printf("Sua média foi de %.1f\n", media);
    
    if (media >= 6)
        printf("Aprovado");
    else
        printf("Reprovado");
    
    return 0;

}