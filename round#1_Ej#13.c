#include <stdio.h>

void main ()
{

    char caracter; 
    char caracter1;
    int acum;

    printf("\nDame el primer caracter\n");
    scanf("%s",&caracter);
    printf("\nDame el segundo caracter\n");
    scanf("%s",&caracter1);

    if (caracter < caracter1)
    {
        /* code */
        printf("true\n");
    }
    if (caracter1 < caracter)
    {
        /* code */
        printf("false\n");
    }
}