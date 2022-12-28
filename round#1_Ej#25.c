#include<stdio.h>

void main ()
{
    int factorial, acum;

    printf("\nDame el numero por hacer factorial\n");
    scanf("%d", &factorial);
    acum = 1;

    for (int i = 1; i <= factorial; i++)
    {
        /* code */
        acum = acum * i;

    }
    printf("%d", acum);
    

}