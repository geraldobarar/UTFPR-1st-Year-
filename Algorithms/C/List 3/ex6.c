/*ex06*/
//não tem como colocar o "float area só an funçào principal"?

#include <stdio.h>
#include <math.h>
#define PI 3.14

float triangulo(){
    float base, altura;
    printf("Qual a base:\n");
    scanf("%f", &base);
    printf("Qual a altura:\n");
    scanf("%f", &altura);
    return (base * altura)/2;
}

float circulo (){
    float raio;
    printf("Qual é o raio:\n");
    scanf("%f", &raio);
    return PI * pow(raio, 2);
}

float cubo (){
    float lado;
    printf("Digite o tamanho do lado:\n");
    scanf("%f", &lado);
    return 6* pow(lado, 2);
}

float cilindro(){
    float raio, altura;
    printf("Digite o raio da base:\n");
    scanf("%f", &raio);
    printf("Digitte a altura:\n");
    scanf("%f", &altura);
    return 2 * PI * raio * (raio + altura);
}


int main()
{
    float area;
    int opcao;
    
    printf("Qual é a figura:<1-triangulo><2-circulo><3-cubo><4-cilindro>\n");
    scanf("%d", &opcao);
    
    
    switch (opcao)
    {
        case 1: 
            area = triangulo();
            break;
        case 2:
            area = circulo();
            break;
        case 3:
            area = cubo();
            break;
        case 4:
            area = cilindro();
            break;
        default:
            printf("Opção Invalida\n");
            return 1;
    }
    
     printf("A area é %.2f", area);

    return 0;
}
