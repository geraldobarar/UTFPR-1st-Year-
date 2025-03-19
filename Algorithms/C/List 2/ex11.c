/*ex11*/

#include<stdio.h>
#include<math.h>

int main()
{
    int lado;
    float medida, area, perimetro;
    
    printf("Quantos lados:\n");
    scanf("%d", &lado);
    printf("Qual a medida:\n");
    scanf("%f", &medida);
    
    if (lado == 3)
    {
        printf("Triangulo\n");
        perimetro = 3*medida;
        printf("O perímetro é de %.2f", perimetro);
    } else if (lado == 4){
        printf("Quadrado");
        area = pow (medida, 2);
        printf("A Area é de %.2f", area);
    } else if (lado >= 5){
        printf("não reconhecido");
    } else{
        printf("não é polígono");
    } 
    
    return 0;
}