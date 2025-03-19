/*ex3*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

void triangulo()
{
    int base, altura, area;
    printf("Qual é a base:\n");
    scanf("%d", &base);
    printf("Qual é a altura:\n");
    scanf("%d", &altura);
    area = (base * altura)/ 2;
    printf("A área do triangulo é de %d", area);
}

void circulo()
{
    int raio, area;
    printf("Qual é o raio:\n");
    scanf("%d", &raio);
    area = (PI * raio * raio);
    printf("A area é: %d", area);
}

void cubo()
{
    int lado, area;
    printf("Qual é a medida do lado:\n");
    scanf("%d", &lado);
    area = pow(lado, 3);
    printf("a area é de: %d", area);
}

void cilindro()
{
    int altura, raio, area;
    printf("Qual é a altura:\n");
    scanf("%d", &altura);
    printf("Qual é o raio:\n");
    scanf("%d", &raio);
    area = (2 * PI * raio * (raio + altura));
    printf("a area é de: %d", area);
}

int main()
{
    int opcao, opcao2 = 1;
   
    while (opcao2 ==1)
    {
        printf("Deseja a area de qual figura:\n<1>triangulo\n<2>círculo\n<3>cubo\n<4>cilindro\n");
        scanf("%d", &opcao);
    
        switch(opcao){
            case 1:
                triangulo();//coloco o que aqui no parenteses
                break;
            case 2:
                circulo();
                break;
            case 3:
                cubo();
                break;
            case 4:
                cilindro();
                break;
            default:
                printf("Opção inválida");
        }
        printf("Deseja informar outro número: <1> Sim <2> Não\n");
        scanf("%d", &opcao2);
    }
    return 0;
}


