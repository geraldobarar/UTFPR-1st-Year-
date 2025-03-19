/*ex6*/

#include <stdio.h>

int main()
{
    int i, num;
    
    printf("Quantos alunos serao avaliados?\n");
    scanf("%d", &num);
    
    float g1[num], g2[num];
    float media[num];
    

    
    for (i=0; i<num; i++)
    {
        printf("Qual foi a primeira nota do aluno %d?\n", i+1);
        scanf("%f", &g1[i]);
        printf("Qual foi a segunda nota do aluno %d?\n", i+1);
        scanf("%f", &g2[i]);
        
        media[i] = ((g1[i] + g2[i]) / 2);
    }
    
    
    printf("A média dos alunos foram:\n");
    for (i=0; i<num; i++)
    {
        printf("A média do aluno %d é: %.2f\n", i+1, media[i]);
    }

    return 0;
}
