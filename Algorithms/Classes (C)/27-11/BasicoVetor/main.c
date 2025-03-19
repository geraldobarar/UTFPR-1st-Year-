
#include <stdio.h>


int main()
{
    int i;
    float notas[3], soma=0, media;
    for (i=0; i<3; i++)
    {
        printf("Informe a nota do aluno:\n");
        scanf("%f", &notas[i]);
        soma= soma + notas[i];
    }
    
    media = soma/i;
    
    printf("A media foi: %.lf\n", media);
    
    
    printf("A primeira nota foi: %f\n", notas[1]);
    printf("A segunda, %f\n", notas[2]);
    printf("A ultima: %f", notas[3]);
    
    printf("%f", notas[0]);
    
    return 0;
    
}
