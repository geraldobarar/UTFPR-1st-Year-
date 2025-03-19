/**/



#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    for (x = 0, y = 0; x+y <= 100; y=y+1)
        printf("%d\n", x+y);
    return 0;
}


