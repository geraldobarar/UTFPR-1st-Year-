/*ex14*/

#include <stdio.h>

float dist(float tempo, float velocidade)
{
    return tempo * velocidade;    
}


int main()
{
    float tempo, velocidade, combustivel; 
    printf("qual o tempo do percurso, em horas:\n");
    scanf("%f", &tempo);
    printf("Qual foi a velocidade média em Km/h:\n");
    scanf("%f", &velocidade);
    printf("Qual é o preço do Combustível:\nR$ ");
    scanf("%f", &combustivel);
    
    float distancia = dist(tempo, velocidade);
    float gasto = combustivel * (distancia / 12);
    
    printf("Para a viagem de %.2f Km, foram gastos R$ %.2f", distancia, gasto);

    return 0;
}
