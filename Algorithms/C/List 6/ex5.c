/*tabela*/

#include <stdio.h>

float conversao(int temp)
{
    float f;
    f = ((temp * 1.8) + 32);
    return f;
}

int main()
{
    int temp = 50;
    do
    {
        printf("%d °c --> %.2f °f\n", temp, conversao(temp));
        temp++;
    } while (temp <= 150);

    return 0;
}
