/*ex1*/
#include <stdio.h>
#include <math.h>

void calculo(int x) //calcula
{
    int y;
    y = 2.5 * cos (x/2) ;
    printf("para %d, temos y valendo %d\n", x, y);        
}

int main()
{
    int x;
    do
    {

        printf("Digite um valor para x:\n");
        scanf("%d", &x);
        if (x >= 0)
        {
            calculo(x);            
        }else{
            return 0;
        }
    }while (x >= 0);        
    
return 0;
}
