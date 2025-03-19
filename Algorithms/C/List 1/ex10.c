/*ex10*/

#include<stdio.h>


int main()
{
    float n1, p1, n2, p2, media;
    
    printf ("Primeira nota:\n");
    scanf ("%f", &n1);
    printf ("Peso da primeira nota: \n");
    scanf("%f", &p1);
    printf ("Segunda nota:\n");
    scanf ("%f", &n2);
    printf ("Peso da segunda prova:\n");
    scanf ("%f", &p2);
    
    media = ((n1 * (p1/10))+(n2 * (p2/10)))/2;
    
    printf("A media final foi de %.2f", media);
    
    return 0;
}