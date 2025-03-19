/*ex2*/

#include <stdio.h>

int main()
{
    int num = 1000, i=1;
    while(num<2000)
    {
        if (num % 11 == 5)
        {
            printf("%d° Número: %d\n",i, num);
            i++;
        }
        num++;
    }
    return 0;
}
