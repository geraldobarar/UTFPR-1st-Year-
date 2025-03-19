/*ex02*/

#include <stdio.h>

/*int main()
{
    int i, totalanteriorA, totalprovisorioA,totalanteriorB,totalprovisorioB;
    for (i = 0; totalprovisorioA <= totalprovisorioB; i++)
    {
        totalanteriorA = 90000000 * 0.03;
        totalprovisorioA = totalanteriorA * 0.03;
        totalanteriorB = 200000000 * 0.015;
        totalprovisorioB = totalanteriorB * 0.015;       
        printf("Ano %d\n", i);
    }

    return 0;
}
*/

int main()
{
    float a=90000000, b=200000000; 
    int ano = 0;
    while (a<b)
    {
        a = a + (a*0.03);
        b = b + (b*0.015);
        ano++;
    }
    printf("A quantidade de anos para A chegar na população de b é de %d anos", ano);
    return 0;
}



