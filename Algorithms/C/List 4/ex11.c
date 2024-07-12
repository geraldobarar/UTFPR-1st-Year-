/*ex11*/

#include <stdio.h>
#include <math.h>

int contagem (int dinheiro)
{
    int cem = 0, cinquenta = 0;
    int vinte = 0, dez = 0,  cinco = 0, um = 0;
    int resto;
    
/*    cem = dinheiro / 100;
    dinheiro = dinheiro - (cem*100);
    cinquenta = dinheiro / 50;
    dinheiro = dinheiro - (cinquenta*50);
    vinte = dinheiro / 20;
    dinheiro = dinheiro - (vinte*20);
    dez = dinheiro /10;
    dinheiro = dinheiro - (dez*10);
    cinco = dinheiro/5;
    dinheiro = dinheiro - (cinco*5);
    um = dinheiro;
*/

    cem = dinheiro / 100;
    dinheiro = dinheiro % 100;
    cinquenta = dinheiro / 50;
    dinheiro %= 50;
    vinte = dinheiro / 20;
    dinheiro %= 20;
    dez = dinheiro /10;
    dinheiro %= 10;
    cinco = dinheiro/5;
    dinheiro %= 5;
    um = dinheiro;

    printf("%d notas de cem,\n%d notas de cinquenta\n%d notas de vinte\n%d notas de dez\n%d notas de cinco\n%d notas de um", cem, cinquenta, vinte, dez, cinco, um);

}


int main()
{
    int dinheiro;
    printf("Qual é o valor de dinheiro:\n");
    scanf("%d", &dinheiro);
    
    contagem(dinheiro);
    
    return 0;
}
