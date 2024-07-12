/*ex10*/

#include<stdio.h>

int main()
{
    float n1, n2, n3, me, media;
    char conceito;
    
    printf("Qual e a primeira nota\n");
    scanf("%f", &n1);
    printf("Segunda nota:\n");
    scanf("%f", &n2);
    printf("Terceira nota:\n");
    scanf("%f", &n3);
    printf("Media de atividades:\n");
    scanf("%f", &me);
    
    media = (n1 + (n2 * 2) + (n3 * 3) + me)/7;
    
    if (media >= 9.0)
    {
        printf("Aprovado!\n");
        conceito = 'A';
    } else if (media >= 7.5 && media < 9.0){
        printf("Aprovado!\n");
        conceito = 'B';
    } else if (media >= 6.0 && media < 7.5){
        printf("Aprovado!\n");
        conceito = 'C';
    } else if (media >= 4.0 && media < 6.0){
        printf("Reprovado!");
        conceito = 'D';
    } else{
        printf("Reprovado!");
        conceito = 'E';
    }
    
    printf("A sua média foi: %.1f, sendo conceito %c", media, conceito);

return 0; 
}