/*08*/
#include <stdio.h>

float calcularMedia(float vetor[], int num)
{
    int i, soma=0;
    float media;
    for (i=0; i<num; i++)
    {
        soma = soma + vetor[i];
    }
    media = (float)soma/num;
    return media;
}


int main()
{
    int i, num;
    
    printf("Digite o numero de itens no vetor:\n");
    scanf("%d", &num);
    
    float n1[num], n2[num], n3[num], media;
    
    for (i=0; i<num; i++)
    {
        printf("Digite um numero do vetor 1:\n");
        scanf("%f", &n1[i]);
        printf("Digite um número do vetor 2:\n");
        scanf("%f", &n2[i]);
        printf("digite um número do vetor 3:\n");
        scanf("%f", &n3[i]);
    }
    
    printf("As média são:\nV1:%.2f\nV2:%.2f\nV3:%.2f", calcularMedia(n1, num), calcularMedia(n2, num), calcularMedia(n3, num));

    return 0;
}
