/*ex16*/
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {
    float y, y2, z, z2, x;
    
    printf("Digite um valor para y:\n");
    scanf("%f", &y);
    printf("Digite um valor para z:\n");
    scanf("%f", &z);
    
    x = sqrt (y * (pow(y, 22) + pow (z, 33)));
    
    printf("O resultado é igual a %.0f", x);
    
    return 0;
    
 }