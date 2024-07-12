/*ex7*/

#include<stdio.h>

int main()
{
    int x, y, z, menor;
    
    printf("x:\n");
    scanf("%d", &x);
    printf("y:\n");
    scanf("%d", &y);
    printf("z:\n");
    scanf ("%d", &z);
    
    if (x > y)
        menor = y;
    else
        menor = x;
    
    if (menor > z);
        menor = z;
    
    printf("O menor valor é: %d", menor);
    
    return 0;
}
