/*ex5*/
#include <stdio.h>
#include <math.h>

void calculo(int x1, int x2, int y1, int y2)
{
    float dist;
    dist= sqrt((pow(x2-x1, 2))+ (pow(y2-y1, 2)));
    printf("A distância é de: %.2f", dist);
}

int main()
{
    int x1, x2, y1, y2;
    printf("Digite a coordenada x do primeiro ponto:\n");
    scanf("%d", &x1);
    printf("Digite a coordenada y do primeiro ponto:\n");
    scanf("%d", &y1);
    printf("Digite a coordenada x do segundo ponto:\n");
    scanf("%d", &x2);
    printf("Digite a coordenada y do segundo ponto:\n");
    scanf("%d", &y2);
    calculo(x1, x2, y1, y2);

    return 0;
}
